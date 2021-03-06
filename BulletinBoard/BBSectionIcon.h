/*
* This header is generated by classdump-dyld 0.2
* on Sunday, December 29, 2013 at 10:54:24 PM India Standard Time
* Operating System: Version 7.0.4 (Build 11B554a)
* Image Source: /System/Library/PrivateFrameworks/BulletinBoard.framework/BulletinBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <BulletinBoard/BulletinBoard-Structs.h>
#import <CoreFoundation/NSCopying.h>
#import <CoreFoundation/NSSecureCoding.h>

@class NSSet;

@interface BBSectionIcon : NSObject <NSCopying, NSSecureCoding> {

	NSSet* _variants;

}

@property (nonatomic,copy) NSSet * variants;              //@synthesize variants=_variants - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone)arg1 ;
-(id)_bestVariantForFormat:(int)arg1 ;
-(id)_bestVariantForUIFormat:(int)arg1 ;
-(id)variants;
-(void)setVariants:(id)arg1 ;
-(void)addVariant:(id)arg1 ;
@end

