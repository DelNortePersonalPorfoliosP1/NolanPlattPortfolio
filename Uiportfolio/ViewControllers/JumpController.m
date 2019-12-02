//
//  HistoController.m
//  Calculator
//
//  Created by John Mortensen on 10/10/19.
//  Copyright © 2019 JM. All rights reserved.
//

#include "control.h"
#import "JumpController.h"

@implementation JumpController
@synthesize tableView, jumps, animal;

- (void)viewDidLoad {
    [super viewDidLoad];
    [self loadTableData];    
    self.tableView.dataSource = self;
    self.tableView.delegate = self;
}

// read data from C file operation
- (IBAction)runButton:(id)sender {
    [self loadTableData];
    [self.tableView reloadData];  // critical to call tableView below
}

// read data from C file operation
-(void)loadTableData  // method to perform calculation
{
    // file name from text dialog
    if (self.jumps.text.intValue && self.animal.text.length)
    {
       // const char *fn = "/Users/johnmortensen/Documents/GitHub/p1f-jm1021/Uiportfolio/ViewControllers/FileIOController.m";
        int jumps = self.jumps.text.intValue;
        const char *animal = [self.animal.text cStringUsingEncoding:NSASCIIStringEncoding];
        OUTLOG* output = jumpers(jumps, (char *)animal);

        // Convert struct to array
        NSMutableArray * tmpary = [[NSMutableArray alloc] initWithCapacity: FILE_BUFFER_SIZE];
        for (int i = 0; i < FILE_BUFFER_SIZE; i++)
        {
            //[tmpary addObject: [NSString stringWithCString: functions[i].name encoding:NSASCIIStringEncoding]];
            [tmpary addObject: [NSString stringWithFormat:@"%s", output[i].message]];
        }
        tableData = tmpary;
    }
}

// table rows
- (NSInteger)tableView:(UITableViewCell *)table numberOfRowsInSection:(NSInteger)section;
{
    NSInteger rsize = [tableData count];
    return rsize;
}

// table columns
- (NSInteger)numberOfSectionsInTableView:(UITableView *)tableView {
    NSInteger csize = 1;
    return csize;
}

// assigns values to visible rows in table as needed
- (UITableViewCell *)tableView:(UITableView *)tableView cellForRowAtIndexPath:(NSIndexPath *)indexPath
{
    static NSString *cellIdentifier = @"cellID";
    
    UITableViewCell *cell = [self.tableView dequeueReusableCellWithIdentifier:cellIdentifier forIndexPath:indexPath];
    
    if(cell == nil) {
        cell = [[UITableViewCell alloc] initWithStyle:UITableViewCellStyleDefault reuseIdentifier:cellIdentifier];
        
    }
    cell.textLabel.text =  [tableData objectAtIndex:indexPath.row];
    NSLog(@"Assign: %@", [tableData objectAtIndex:indexPath.row]);

    return cell;
}

// activates at button click on row
- (void)tableView:(UITableView *)tableView didSelectRowAtIndexPath:(NSIndexPath *)indexPath;
{
    NSLog(@"Select: %@", [tableData objectAtIndex:indexPath.row]);
}

@end
