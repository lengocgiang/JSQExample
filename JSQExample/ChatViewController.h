//
//  ViewController.h
//  JSQExample
//
//  Created by Le Ngoc Giang on 6/29/15.
//  Copyright (c) 2015 giangle. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <JSQMessages.h>

@class ChatViewController;

@protocol ViewControllerDelegate <NSObject>
- (void)didDismissViewController:(ChatViewController*)vc;
@end

@interface ChatViewController : JSQMessagesViewController

@property (weak, nonatomic) id <ViewControllerDelegate>delegate;

@property (strong, nonatomic) 

- (void)receiveMessagePressed:(UIBarButtonItem *)sender;

- (void)closePressed:(UIBarButtonItem *)sender;

@end

