//
//  DZMenuViewController.h
//  ScienceCalculator
//
//  Created by 董 政 on 12-3-6.
//  Copyright (c) 2012年 复旦大学. All rights reserved.
//


@interface DZMenuViewController : TTTableViewController

@property (nonatomic,retain) UISwitch * advancedMode;
@property (nonatomic,retain) UISwitch * forcedScientificNotation;

- (void)advancedModeChanged;
- (void)forcedScientificNotationChanged;

@end
