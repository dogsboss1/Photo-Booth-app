//
//  TimerEditorViewController.h
//  Claire's Photo App
//
//  Created by felix king on 14/08/2015.
//  Copyright (c) 2015 Felix King. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface TimerEditorViewController : UIViewController

@property (weak, nonatomic) IBOutlet UILabel *photoNumberLabel;
@property (weak, nonatomic) IBOutlet UILabel *timeBetweenPhotosLabel;

- (IBAction)continuingThisTimeButtonPressed:(UIButton *)sender;
- (IBAction)nextPhotoButtonPressed:(UIButton *)sender;

@property (weak, nonatomic) IBOutlet UIButton *continuingThisTimeButton;
@property (weak, nonatomic) IBOutlet UIButton *nextPhotoButton;

@property (weak, nonatomic) IBOutlet UIPickerView *timePicker;


@end
