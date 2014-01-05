/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

@class SBIcon, SBIconView;

@interface SBIconLabelImageParametersBuilder : NSObject
{
    SBIcon *_icon;
    SBIconView *_iconView;
    id <SBIconViewDelegate> _iconViewDelegate;
    Class _iconViewClass;
    int _iconLocation;
    int _style;
}

@property(nonatomic) int style; // @synthesize style=_style;
@property(nonatomic) int iconLocation; // @synthesize iconLocation=_iconLocation;
@property(retain, nonatomic) Class iconViewClass; // @synthesize iconViewClass=_iconViewClass;
@property(retain, nonatomic) id <SBIconViewDelegate> iconViewDelegate; // @synthesize iconViewDelegate=_iconViewDelegate;
@property(retain, nonatomic) SBIconView *iconView; // @synthesize iconView=_iconView;
@property(retain, nonatomic) SBIcon *icon; // @synthesize icon=_icon;
- (BOOL)_hasValidInputs;
- (id)_font;
- (struct CGSize)_maxSize;
- (id)buildParameters;
- (void)dealloc;

@end

