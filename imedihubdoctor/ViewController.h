//
//  ViewController.h
//  imedihubdoctor
//
//  Created by Aparna Reddy Challa on 06/12/16.
//  Copyright © 2016 Aparna Reddy Challa. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ViewController : UIViewController<UIWebViewDelegate,UIImagePickerControllerDelegate, UINavigationControllerDelegate,NSURLConnectionDataDelegate,UIAlertViewDelegate>{
    
    BOOL _Authenticated;
    BOOL result ;
    NSURLRequest *_FailedRequest;
    NSString *url_store;
    NSString *boundary;
    UIImage *chosenImage;
    UIImageView *imageView;
    NSString *url_last_str;
    NSString *id_value;
    NSString *stored_id;
    NSString *url_str;
    IBOutlet UIWebView *myWebView;
    IBOutlet UISwitch *overrideLinksSwitch;
    
}
@property (nonatomic, strong) NSURL *originalUrl;
@property (nonatomic) BOOL validatedRequest;
-(void)imageDownload:(UIImage*)img;
- (void) myMethodAction;


@end

