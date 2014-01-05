/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "UIAlertView.h"

#import "UIAlertViewDelegate.h"

@class NSString, UITextField;

@interface PLPasswordAlertView : UIAlertView <UIAlertViewDelegate>
{
    id _completionHandler;
    UITextField *_accountTextField;
    UITextField *_passwordTextField;
    long long _style;
}

@property(readonly, nonatomic) long long style; // @synthesize style=_style;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
@property(copy, nonatomic) NSString *accountTextFieldPlaceholder;
- (void)dealloc;
- (id)initWithTitle:(id)arg1 message:(id)arg2 delegate:(id)arg3 cancelButtonTitle:(id)arg4 otherButtonTitles:(id)arg5;
- (id)initWithStyle:(long long)arg1 title:(id)arg2 message:(id)arg3 completionHandler:(id)arg4;
- (id)initWithTitle:(id)arg1 message:(id)arg2 completionHandler:(id)arg3;

@end

