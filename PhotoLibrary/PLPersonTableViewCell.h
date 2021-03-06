/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "UITableViewCell.h"

@class NSString, UIImage, UIImageView;

@interface PLPersonTableViewCell : UITableViewCell
{
    UIImage *_personIcon;
    NSString *_personFirstName;
    NSString *_personLastName;
    UIImageView *__personIconImageView;
    UIImage *__personMonogramImage;
}

@property(retain, nonatomic, setter=_setPersonMonogramImage:) UIImage *_personMonogramImage; // @synthesize _personMonogramImage=__personMonogramImage;
@property(retain, nonatomic, setter=_setPersonIconImageView:) UIImageView *_personIconImageView; // @synthesize _personIconImageView=__personIconImageView;
@property(copy, nonatomic) NSString *personLastName; // @synthesize personLastName=_personLastName;
@property(copy, nonatomic) NSString *personFirstName; // @synthesize personFirstName=_personFirstName;
@property(retain, nonatomic) UIImage *personIcon; // @synthesize personIcon=_personIcon;
- (void)_updatePersonIconImageView;
- (void)layoutSubviews;
- (void)dealloc;

@end

