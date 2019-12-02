//
//  HistoController.h
//  UIPortfolio
//
//  Created by Michael Hayes on 11/10/19.
//  Copyright © 2019 Hayes, Michael. All rights reserved.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN
//Interface organizes the IBOutlets
@interface HistoController : UIViewController<UITextFieldDelegate>
//Outlets to store values
@property (weak, nonatomic) IBOutlet UITextField *value1Field;
@property (weak, nonatomic) IBOutlet UITextField *value2Field;
@property (weak, nonatomic) IBOutlet UITextField *value3Field;
@property (weak, nonatomic) IBOutlet UITextField *value4Field;
@property (weak, nonatomic) IBOutlet UITextField *value5Field;
@property (weak, nonatomic) IBOutlet UITextField *value6Field;
@property (weak, nonatomic) IBOutlet UITextField *value7Field;
@property (weak, nonatomic) IBOutlet UITextField *value8Field;
@property (weak, nonatomic) IBOutlet UITextField *value9Field;
@property (weak, nonatomic) IBOutlet UITextField *value10Field;
//Outlets for values of histogram
@property (weak, nonatomic) IBOutlet UILabel *value1Label;
@property (weak, nonatomic) IBOutlet UILabel *value2Label;
@property (weak, nonatomic) IBOutlet UILabel *value3Label;
@property (weak, nonatomic) IBOutlet UILabel *value4Label;
@property (weak, nonatomic) IBOutlet UILabel *value5Label;
@property (weak, nonatomic) IBOutlet UILabel *value6Label;
@property (weak, nonatomic) IBOutlet UILabel *value7Label;
@property (weak, nonatomic) IBOutlet UILabel *value8Label;
@property (weak, nonatomic) IBOutlet UILabel *value9Label;
@property (weak, nonatomic) IBOutlet UILabel *value10Label;
@end

NS_ASSUME_NONNULL_END
