//
//  ViewController.h
//  JSQExample
//
//  Created by Le Ngoc Giang on 6/29/15.
//  Copyright (c) 2015 giangle. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <JSQMessages.h>
#import "DataModel.h"
#import "NSUserDefaults+DemoSettings.h"

@class ChatViewController;

@protocol ViewControllerDelegate <NSObject>
- (void)didDismissViewController:(ChatViewController*)vc;
@end

@interface ChatViewController : JSQMessagesViewController
<
    UIActionSheetDelegate
>

@property (weak, nonatomic) id <ViewControllerDelegate>delegate;

@property (strong, nonatomic) DataModel *demoData;

- (void)receiveMessagePressed:(UIBarButtonItem *)sender;

- (void)closePressed:(UIBarButtonItem *)sender;

@end

