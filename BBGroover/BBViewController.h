//
//  BBViewController.h
//  BeatBuilder
//
//  Created by Parker Wightman on 7/21/12.
//  Copyright (c) 2012 Parker Wightman. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "BBGroover.h"
#import "BBGridView.h"
#import "BBTickView.h"

@interface BBViewController : UIViewController <BBGrooverDelegate, BBGridViewDelegate, BBTickViewDelegate>

@property (nonatomic, strong) BBGroover *groover;
@property (strong, nonatomic) IBOutlet UILabel *tempoLabel;
@property (strong, nonatomic) IBOutlet UISlider *tempoSlider;
@property (strong, nonatomic) IBOutlet BBTickView *tickView;

@end
