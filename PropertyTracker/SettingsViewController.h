//
//  SettingsViewController.h
//  PropertyTracker
//
//  Created by Jared Poetter on 10/12/14.
//  Copyright (c) 2014 JP. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface SettingsViewController : UIViewController <UITableViewDelegate, UITableViewDataSource>

@property (weak, nonatomic) IBOutlet UITableView *settingsTableView;

@end
