//
//  HistoController.h
//  uiPortfolio
//
//  Created by John Mortensen on 10/10/19.
//  Copyright © 2019 JM. All rights reserved.
//

#import <UIKit/UIKit.h>


@interface JumpController : UIViewController <UITableViewDataSource, UITableViewDelegate>
{
    NSArray *tableData;
}
@property (weak, nonatomic) IBOutlet UITextField *jumps;
@property (weak, nonatomic) IBOutlet UITextField *animal;

@property (strong, nonatomic) IBOutlet UITableView *tableView;

@end
