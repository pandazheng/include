/*
* This header is generated by classdump-dyld 0.2
* on Monday, December 30, 2013 at 4:57:31 PM India Standard Time
* Operating System: Version 7.0.4 (Build 11B554a)
* Image Source: /private/var/stash/Applications.BjEYur/MobileSlideShow.app/MobileSlideShow
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIAlertViewDelegate.h>

@protocol PLRootLibraryNavigationController;
@class NSURL, UIAlertView;

@interface PhotosURLRedirectRequest : NSObject <UIAlertViewDelegate> {

	NSURL* _URL;
	UIAlertView* _alertView;
	<PLRootLibraryNavigationController>* _rootController;

}
-(id)initWithDestinationURL:(id)arg1 rootController:(id)arg2 ;
-(void)performRequest;
-(void)_showAlertForError:(int)arg1 ;
-(BOOL)_checkAndAlertSubscribedStreamsLimitReached;
-(void)_navigateToPhotoStreamTab;
-(void)dealloc;
-(void)alertView:(id)arg1 didDismissWithButtonIndex:(int)arg2 ;
@end

