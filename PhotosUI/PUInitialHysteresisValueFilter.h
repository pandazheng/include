/*
* This header is generated by classdump-dyld 0.2
* on Sunday, December 29, 2013 at 10:55:03 PM India Standard Time
* Operating System: Version 7.0.4 (Build 11B554a)
* Image Source: /System/Library/PrivateFrameworks/PhotosUI.framework/PhotosUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <PhotosUI/PUValueFilter.h>

@interface PUInitialHysteresisValueFilter : PUValueFilter {

	BOOL _didReachThreshold;
	double _initialHysteresis;
	double _thresholdValue;

}

@property (assign,nonatomic) double thresholdValue;              //@synthesize thresholdValue=_thresholdValue - In the implementation block
-(double)updatedValue:(double)arg1 withTargetValue:(double)arg2 ;
-(double)thresholdValue;
-(void)setThresholdValue:(double)arg1 ;
@end

