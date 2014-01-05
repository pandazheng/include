/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "UITableViewCell.h"

#import "UITextFieldDelegate.h"

@class NSString, UIImageView, UILabel, UITextField;

@interface PLLibraryTableViewCell : UITableViewCell <UITextFieldDelegate>
{
    UITextField *_editableRenameField;
    UILabel *_subtitleLabel;
    UIImageView *_unreadBadge;
    int _libraryCellEditStyle;
    int _libraryCellStyle;
    NSString *_subtitleText;
    _Bool _cellEnabled;
    _Bool _showsUnreadIndicator;
    _Bool _padForUnreadIndicator;
    id <PLLibraryTableViewCellEditingDelegate> _editingDelegate;
}

+ (id)photoCountFormatter;
@property(nonatomic) _Bool padForUnreadIndicator; // @synthesize padForUnreadIndicator=_padForUnreadIndicator;
@property(nonatomic) _Bool showsUnreadIndicator; // @synthesize showsUnreadIndicator=_showsUnreadIndicator;
@property(retain, nonatomic) NSString *subtitleText; // @synthesize subtitleText=_subtitleText;
@property(nonatomic) id <PLLibraryTableViewCellEditingDelegate> editingDelegate; // @synthesize editingDelegate=_editingDelegate;
@property(nonatomic) _Bool cellEnabled; // @synthesize cellEnabled=_cellEnabled;
@property(nonatomic) int libraryCellEditStyle; // @synthesize libraryCellEditStyle=_libraryCellEditStyle;
- (void)layoutSubviews;
- (struct CGRect)_unreadBadgeFrame;
- (struct CGPoint)destinationPointForMovePhotosAnimation;
- (void)animatePopRowWithDuration:(double)arg1 completion:(id)arg2;
- (struct CGRect)_editableFieldFrame;
- (void)_updateSelectionStyle;
- (void)endRenaming;
- (_Bool)textFieldShouldReturn:(id)arg1;
- (void)textFieldDidEndEditing:(id)arg1;
- (void)textFieldDidBeginEditing:(id)arg1;
- (_Bool)textFieldShouldBeginEditing:(id)arg1;
- (void)didTransitionToState:(unsigned long long)arg1;
- (void)setEditing:(_Bool)arg1 animated:(_Bool)arg2;
- (void)willTransitionToState:(unsigned long long)arg1;
@property(readonly, nonatomic, getter=isRenaming) _Bool renaming;
- (void)setPadForUnreadIndicator:(_Bool)arg1 animated:(_Bool)arg2;
- (void)setShowsUnreadIndicator:(_Bool)arg1 animated:(_Bool)arg2;
- (id)subtitleLabel;
- (void)setText:(id)arg1 photoCount:(int)arg2 posterImage:(id)arg3;
- (void)prepareForReuse;
- (void)dealloc;
- (id)initWithReuseIdentifier:(id)arg1 style:(int)arg2;
- (id)initWithReuseIdentifier:(id)arg1;

@end

