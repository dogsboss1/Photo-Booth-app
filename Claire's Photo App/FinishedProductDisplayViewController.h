//
//  FinishedProductDisplayViewController.h
//  Claire's Photo App
//
//  Created by felix king on 14/08/2015.
//  Copyright (c) 2015 Felix King. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface FinishedProductDisplayViewController : UIViewController
@property (weak, nonatomic) IBOutlet UILabel *TitleLabel;

@property (weak, nonatomic) IBOutlet UIImageView *displayImage;

- (IBAction)finishedButtonPressed:(UIButton *)sender;

@property (weak, nonatomic) IBOutlet UIButton *finishedButton;

@end
