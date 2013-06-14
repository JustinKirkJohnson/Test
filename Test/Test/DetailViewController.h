//
//  DetailViewController.h
//  Test
//
//  Created by Johnson, Justin on 6/14/13.
//  Copyright (c) 2013 Johnson, Justin. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController <UISplitViewControllerDelegate>

@property (strong, nonatomic) id detailItem;

@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;
@end
