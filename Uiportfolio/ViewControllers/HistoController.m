//
//  HistoController.m
//  UIPortfolio
//
//  Created by Michael Hayes on 11/10/19.
//  Copyright © 2019 Hayes, Michael. All rights reserved.
//

#import "HistoController.h"
#import "control.h"
@interface HistoController ()

@end

@implementation HistoController

- (void)viewDidLoad {
    [super viewDidLoad];
    self.value10Field.delegate = self;
    // Do any additional setup after loading the view.
}
//Action for when create graph button is pressed
- (IBAction)graphIt:(id)sender {
    float bar1 = [self.value1Field.text floatValue];
    float bar2 = [self.value2Field.text floatValue];
    float bar3 = [self.value3Field.text floatValue];
    float bar4 = [self.value4Field.text floatValue];
    float bar5 = [self.value5Field.text floatValue];
    float bar6 = [self.value6Field.text floatValue];
    float bar7 = [self.value7Field.text floatValue];
    float bar8 = [self.value8Field.text floatValue];
    float bar9 = [self.value9Field.text floatValue];
    float bar10 = [self.value10Field.text floatValue]; //Assigns values from text fields to variables
    NSNumber *bar1Wrapper = [NSNumber numberWithFloat:bar1];
    NSNumber *bar2Wrapper = [NSNumber numberWithFloat:bar2];
    NSNumber *bar3Wrapper = [NSNumber numberWithFloat:bar3];
    NSNumber *bar4Wrapper = [NSNumber numberWithFloat:bar4];
    NSNumber *bar5Wrapper = [NSNumber numberWithFloat:bar5];
    NSNumber *bar6Wrapper = [NSNumber numberWithFloat:bar6];
    NSNumber *bar7Wrapper = [NSNumber numberWithFloat:bar7];
    NSNumber *bar8Wrapper = [NSNumber numberWithFloat:bar8];
    NSNumber *bar9Wrapper = [NSNumber numberWithFloat:bar9];
    NSNumber *bar10Wrapper = [NSNumber numberWithFloat:bar10]; //Convert float value of values (C) to NSNumber to be displayed in label in view (Objective-C)
    self.value1Label.text = [bar1Wrapper stringValue];
    self.value2Label.text = [bar2Wrapper stringValue];
    self.value3Label.text = [bar3Wrapper stringValue];
    self.value4Label.text = [bar4Wrapper stringValue];
    self.value5Label.text = [bar5Wrapper stringValue];
    self.value6Label.text = [bar6Wrapper stringValue];
    self.value7Label.text = [bar7Wrapper stringValue];
    self.value8Label.text = [bar8Wrapper stringValue];
    self.value9Label.text = [bar9Wrapper stringValue];
    self.value10Label.text = [bar10Wrapper stringValue]; //Assign NSNumbers to labels below graph
    //Math logic that will be transfered to separate C file, how to pass array through prototype?
    float bar1temp, bar2temp, bar3temp, bar4temp, bar5temp,bar6temp, bar7temp, bar8temp, bar9temp, bar10temp;
    bar1temp = bar1;
    bar2temp = bar2;
    bar3temp = bar3;
    bar4temp = bar4;
    bar5temp = bar5;
    bar6temp = bar6;
    bar7temp = bar7;
    bar8temp = bar8;
    bar9temp = bar9;
    bar10temp = bar10; //Assigns bar values to a temporary variable for ratio (needs to be a float)
    int bar1tempC, bar2tempC, bar3tempC, bar4tempC, bar5tempC,bar6tempC, bar7tempC, bar8tempC, bar9tempC, bar10tempC;
    bar1tempC = bar1;
    bar2tempC = bar2;
    bar3tempC = bar3;
    bar4tempC = bar4;
    bar5tempC = bar5;
    bar6tempC = bar6;
    bar7tempC = bar7;
    bar8tempC = bar8;
    bar9tempC = bar9;
    bar10tempC = bar10; //Assigns bar values to a temporary variable for calculation (needs to be a whole number)
    int arr[] = {bar1tempC, bar2tempC, bar3tempC, bar4tempC, bar5tempC,bar6tempC, bar7tempC, bar8tempC, bar9tempC, bar10tempC};
    int n = sizeof(arr)/sizeof(arr[0]); //Finds largest value by setting other values to zero in process
    int greatest = largest(arr, n); //Assigns largest value to greatest variable in order to be used in math calculations
    bar1 = bar1temp;
    bar2 = bar2temp;
    bar3 = bar3temp;
    bar4 = bar4temp;
    bar5 = bar5temp;
    bar6 = bar6temp;
    bar7 = bar7temp;
    bar8 = bar8temp;
    bar9 = bar9temp;
    bar10 = bar10temp; //Resets array values of the bar to original values from temporary variable (to find the greatest, all others values in array are set to 0)

    float barRatio1 = bar1temp/greatest; //Calculates bar ratio
    bar1 = barRatio1 * 335; //Scales value to pixel height of largest possible label
    float barRatio2 = bar2temp/greatest;
    bar2 = barRatio2 * 335;
    float barRatio3 = bar3temp/greatest;
    bar3 = barRatio3 * 335;
    float barRatio4 = bar4temp/greatest;
    bar4 = barRatio4 * 335;
    float barRatio5 = bar5temp/greatest;
    bar5 = barRatio5 * 335;
    float barRatio6 = bar6temp/greatest;
    bar6 = barRatio6 * 335;
    float barRatio7 = bar7temp/greatest;
    bar7 = barRatio7 * 335;
    float barRatio8 = bar8temp/greatest;
    bar8 = barRatio8 * 335;
    float barRatio9 = bar9temp/greatest;
    bar9 = barRatio9 * 335;
    float barRatio10 = bar10temp/greatest;
    bar10 = barRatio10 * 335;
    //Creates graph bar with labels
    UILabel *graphBar1Label = [[UILabel alloc] initWithFrame: CGRectMake(30, (619 - bar1), 30, bar1)];
    graphBar1Label.backgroundColor = [UIColor lightGrayColor];
    [self.view addSubview:graphBar1Label];
    //Creates first bar
    UILabel *graphBar2Label = [[UILabel alloc] initWithFrame: CGRectMake(60, (619 - bar2), 30, bar2)];
      graphBar2Label.backgroundColor = [UIColor whiteColor];
      [self.view addSubview:graphBar2Label];
      //Creates second bar
    UILabel *graphBar3Label = [[UILabel alloc] initWithFrame: CGRectMake(90, (619 - bar3), 30, bar3)];
       graphBar3Label.backgroundColor = [UIColor lightGrayColor];
       [self.view addSubview:graphBar3Label];
       //Creates third bar
    UILabel *graphBar4Label = [[UILabel alloc] initWithFrame: CGRectMake(120, (619 - bar4), 30, bar4)];
          graphBar4Label.backgroundColor = [UIColor whiteColor];
          [self.view addSubview:graphBar4Label];
          //Creates fourth bar
    UILabel *graphBar5Label = [[UILabel alloc] initWithFrame: CGRectMake(150, (619 - bar5), 30, bar5)];
    graphBar5Label.backgroundColor = [UIColor lightGrayColor];
    [self.view addSubview:graphBar5Label];
    //Creates fifth bar
    UILabel *graphBar6Label = [[UILabel alloc] initWithFrame: CGRectMake(180, (619 - bar6), 30, bar6)];
       graphBar6Label.backgroundColor = [UIColor whiteColor];
       [self.view addSubview:graphBar6Label];
       //Creates sixth bar
     UILabel *graphBar7Label = [[UILabel alloc] initWithFrame: CGRectMake(210, (619 - bar7), 30, bar7)];
          graphBar7Label.backgroundColor = [UIColor lightGrayColor];
          [self.view addSubview:graphBar7Label];
          //Creates seventh bar
      UILabel *graphBar8Label = [[UILabel alloc] initWithFrame: CGRectMake(240, (619 - bar8), 30, bar8)];
            graphBar8Label.backgroundColor = [UIColor whiteColor];
            [self.view addSubview:graphBar8Label];
            //Creates eighth bar
    UILabel *graphBar9Label = [[UILabel alloc] initWithFrame: CGRectMake(270, (619 - bar9), 30, bar9)];
               graphBar9Label.backgroundColor = [UIColor lightGrayColor];
               [self.view addSubview:graphBar9Label];
               //Creates ninth bar
    UILabel *graphBar10Label = [[UILabel alloc] initWithFrame: CGRectMake(300, (619 - bar10), 30, bar10)];
    graphBar10Label.backgroundColor = [UIColor whiteColor];
    [self.view addSubview:graphBar10Label];
    //Creates tenth bar
    [self.value1Field resignFirstResponder];
    [self.value2Field resignFirstResponder];
    [self.value3Field resignFirstResponder];
    [self.value4Field resignFirstResponder];
    [self.value5Field resignFirstResponder];
    [self.value6Field resignFirstResponder];
    [self.value7Field resignFirstResponder];
    [self.value8Field resignFirstResponder];
    [self.value9Field resignFirstResponder];
    [self.value10Field resignFirstResponder];
}

- (BOOL)textFieldShouldReturn:(UITextField *)textField //"If true" statement if the return key is pressed
{
    [self.value10Field resignFirstResponder]; //Dismisses keyboard
    return YES; //Satisfies boolean
}/*
#pragma mark - Navigation

// In a storyboard-based application, you will often want to do a little preparation before navigation
- (void)prepareForSegue:(UIStoryboardSegue *)segue sender:(id)sender {
    // Get the new view controller using [segue destinationViewController].
    // Pass the selected object to the new view controller.
}
*/

@end
