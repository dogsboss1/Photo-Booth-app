//
//  CameraModeCustomViewController.h
//  Claire's Photo App
//
//  Created by felix king on 14/08/2015.
//  Copyright (c) 2015 Felix King. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface CameraModeCustomViewController : UIViewController

@property (weak, nonatomic) IBOutlet UILabel *titleLabel;
@property (weak, nonatomic) IBOutlet UILabel *countdownLabel;

@property (weak, nonatomic) IBOutlet UIImageView *cameraDisplayImage;
@property (weak, nonatomic) IBOutlet UIImageView *imageNum1;
@property (weak, nonatomic) IBOutlet UIImageView *imageNum2;
@property (weak, nonatomic) IBOutlet UIImageView *imageNum3;
@property (weak, nonatomic) IBOutlet UIImageView *imageNum4;
@property (weak, nonatomic) IBOutlet UIImageView *imageNum5;

- (IBAction)takePictureButtonPressed:(UIButton *)sender;
- (IBAction)settingsButtonPressed:(UIButton *)sender;

@property (weak, nonatomic) IBOutlet UIButton *takePictureButton;
@property (weak, nonatomic) IBOutlet UIButton *settingsButton;

//======================


@property (weak, nonatomic) IBOutlet UILabel *theNewTitleLabel;
@property (weak, nonatomic) IBOutlet UILabel *numOfPhotosLabel;

- (IBAction)nextOptionButtonPressed:(UIButton *)sender;


@property (weak, nonatomic) IBOutlet UIButton *nextOptionButton;

@property (weak, nonatomic) IBOutlet UIPickerView *numberOfPhotosPicker;

@end
