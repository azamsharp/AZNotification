//
//  ViewController.m
//  Helping
//
//  Created by Mohammad Azam on 3/24/14.
//  Copyright (c) 2014 AzamSharp Consulting LLC. All rights reserved.
//

#import "ViewController.h"


@interface ViewController ()

@end

@implementation ViewController

- (void)viewDidLoad
{
    [super viewDidLoad];
    
}

-(IBAction) show:(id)sender
{
    int tag = ((UIButton *) sender).tag;
    
    if(tag == 0)
    {
    [AZNotification showNotificationWithTitle:@"Success! Now let's play!" controller:self notificationType:AZNotificationTypeSuccess shouldShowNotificationUnderNavigationBar:YES];
    }
    else if(tag == 1)
    {
        [AZNotification showNotificationWithTitle:@"Error: WTF happened!" controller:self notificationType:AZNotificationTypeError shouldShowNotificationUnderNavigationBar:YES];
    }
    else if(tag == 2)
    {
        [AZNotification showNotificationWithTitle:@"Oh BTW! Your hair is on fire!" controller:self notificationType:AZNotificationTypeWarning];
    }
    else
    {
        [AZNotification showNotificationWithTitle:@"There are no new messages!" controller:self notificationType:AZNotificationTypeMessage];
    }
}

- (void)didReceiveMemoryWarning
{
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}

@end
