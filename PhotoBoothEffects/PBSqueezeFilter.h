/*
* This header is generated by classdump-dyld 0.2
* on Sunday, December 29, 2013 at 10:54:59 PM India Standard Time
* Operating System: Version 7.0.4 (Build 11B554a)
* Image Source: /System/Library/PrivateFrameworks/PhotoBoothEffects.framework/PhotoBoothEffects
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <PhotoBoothEffects/PhotoBoothEffects-Structs.h>
#import <PhotoBoothEffects/PBFilter.h>

@interface PBSqueezeFilter : PBFilter {

	float lastInputX;
	float lastInputY;
	float lastInputRadius;
	float lastInputScale;
	float _inputAmount;
	bool firstTime;
	CGPoint inputPoint;

}

@property (assign) CGPoint inputPoint; 
@property (@dynamic) float inputAmount; 
-(void)setDefaults;
-(void)setInputAmount:(float)arg1 ;
-(float)inputAmount;
-(CGPoint)inputPoint;
-(void)setInputPoint:(CGPoint)arg1 ;
-(id)ciFilterName;
-(BOOL)needsWrapMirror;
-(void)applyParametersToCIFilter:(BOOL)arg1 extent:(CGRect)arg2 ;
@end

