/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "UITextView.h"

@class UILabel;

@interface PLTextView : UITextView
{
    UILabel *_placeholder;
    _Bool _showingPlaceholder;
}

- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)setPlaceholderText:(id)arg1;
- (id)_placeholder;
- (void)updatePlaceholder;
- (void)setContentOffset:(struct CGPoint)arg1;
- (void)dealloc;

@end

