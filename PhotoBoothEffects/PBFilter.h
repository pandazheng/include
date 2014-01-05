/*
* This header is generated by classdump-dyld 0.2
* on Sunday, December 29, 2013 at 10:54:59 PM India Standard Time
* Operating System: Version 7.0.4 (Build 11B554a)
* Image Source: /System/Library/PrivateFrameworks/PhotoBoothEffects.framework/PhotoBoothEffects
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <PhotoBoothEffects/PhotoBoothEffects-Structs.h>
@class CIFilter;

@interface PBFilter : NSObject {

	CIFilter* _ciFilter;
	CIFilter* _wrapMirrorFilter;

}
+(id)defaultValueForKey:(id)arg1 ;
+(id)filterWithName:(id)arg1 ;
+(BOOL)needsDisplayForKey:(id)arg1 ;
-(id)inputKeys;
-(void)setDefaults;
-(void)dealloc;
-(id)init;
-(id)description;
-(id)name;
-(id)localizedName;
-(id)ciFilterName;
-(BOOL)needsWrapMirror;
-(void)applyParametersToCIFilter:(BOOL)arg1 extent:(CGRect)arg2 ;
-(id)createOutputImage:(id)arg1 mirrored:(BOOL)arg2 size:(CGSize)arg3 ;
-(void)resetInputImage;
-(id)ciFilter;
-(BOOL)allowAbsoluteGestures;
-(id)_presentationName;
-(void)renderWithContext:(id)arg1 inputSize:(CGSize)arg2 outputRect:(CGRect)arg3 mirrored:(BOOL)arg4 ;
-(CGPoint)pointValueForKeyIfSupported:(id)arg1 ;
-(float)floatValueForKeyIfSupported:(id)arg1 ;
-(void)setPointValue:(CGPoint)arg1 forKeyIfSupported:(id)arg2 ;
-(void)setFloatValue:(float)arg1 forKeyIfSupported:(id)arg2 ;
-(void)handleTapGesture:(CGPoint)arg1 viewSize:(CGSize)arg2 mirror:(BOOL)arg3 ;
-(void)handleGestureAtLocations:(CGPoint*)arg1 count:(int)arg2 translation:(CGPoint)arg3 viewSize:(CGSize)arg4 stateBegan:(BOOL)arg5 mirror:(BOOL)arg6 ;
-(void)handlePanGesture:(CGPoint)arg1 viewSize:(CGSize)arg2 stateBegan:(BOOL)arg3 mirror:(BOOL)arg4 ;
-(void)handlePinchGesture:(float)arg1 stateBegan:(BOOL)arg2 ;
-(void)handleRotateGesture:(float)arg1 stateBegan:(BOOL)arg2 mirror:(BOOL)arg3 ;
@end

