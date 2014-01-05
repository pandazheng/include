/*
* This header is generated by classdump-dyld 0.2
* on Sunday, December 29, 2013 at 10:55:06 PM India Standard Time
* Operating System: Version 7.0.4 (Build 11B554a)
* Image Source: /System/Library/PrivateFrameworks/PhotosUI.framework/PhotosUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <PhotosUI/PhotosUI-Structs.h>
#import <PhotosUI/PUFeedCell.h>

@class NSAttributedString, UIImage, UILabel, UIImageView, UIButton;

@interface PUFeedTextCell : PUFeedCell {

	BOOL _shouldUseOpaqueBackground;
	NSAttributedString* _attributedText;
	int _numberOfTextLines;
	float _textDetailTextSpacing;
	NSAttributedString* _attributedDetailText;
	int _numberOfDetailTextLines;
	int _textAlignment;
	UIImage* _iconImage;
	int _iconLocation;
	int _tappableArea;
	int _buttonType;
	int _buttonSize;
	int _buttonHorizontalAlignment;
	float _buttonPadding;
	UILabel* __label;
	UILabel* __detailLabel;
	UIImageView* __iconImageView;
	UIButton* __button;
	UIOffset _iconOffset;
	UIOffset _buttonOffset;
	UIEdgeInsets _contentInsets;
	UIEdgeInsets _iconPadding;

}

@property (assign,nonatomic) UIEdgeInsets contentInsets;                                          //@synthesize contentInsets=_contentInsets - In the implementation block
@property (nonatomic,retain) NSAttributedString * attributedText;                                 //@synthesize attributedText=_attributedText - In the implementation block
@property (assign,nonatomic) int numberOfTextLines;                                               //@synthesize numberOfTextLines=_numberOfTextLines - In the implementation block
@property (assign,nonatomic) float textDetailTextSpacing;                                         //@synthesize textDetailTextSpacing=_textDetailTextSpacing - In the implementation block
@property (nonatomic,retain) NSAttributedString * attributedDetailText;                           //@synthesize attributedDetailText=_attributedDetailText - In the implementation block
@property (assign,nonatomic) int numberOfDetailTextLines;                                         //@synthesize numberOfDetailTextLines=_numberOfDetailTextLines - In the implementation block
@property (assign,nonatomic) int textAlignment;                                                   //@synthesize textAlignment=_textAlignment - In the implementation block
@property (nonatomic,retain) UIImage * iconImage;                                                 //@synthesize iconImage=_iconImage - In the implementation block
@property (assign,nonatomic) int iconLocation;                                                    //@synthesize iconLocation=_iconLocation - In the implementation block
@property (assign,nonatomic) UIEdgeInsets iconPadding;                                            //@synthesize iconPadding=_iconPadding - In the implementation block
@property (assign,nonatomic) UIOffset iconOffset;                                                 //@synthesize iconOffset=_iconOffset - In the implementation block
@property (assign,nonatomic) int tappableArea;                                                    //@synthesize tappableArea=_tappableArea - In the implementation block
@property (assign,nonatomic) int buttonType;                                                      //@synthesize buttonType=_buttonType - In the implementation block
@property (assign,nonatomic) int buttonSize;                                                      //@synthesize buttonSize=_buttonSize - In the implementation block
@property (assign,nonatomic) int buttonHorizontalAlignment;                                       //@synthesize buttonHorizontalAlignment=_buttonHorizontalAlignment - In the implementation block
@property (assign,nonatomic) UIOffset buttonOffset;                                               //@synthesize buttonOffset=_buttonOffset - In the implementation block
@property (assign,nonatomic) float buttonPadding;                                                 //@synthesize buttonPadding=_buttonPadding - In the implementation block
@property (assign,nonatomic) BOOL shouldUseOpaqueBackground;                                      //@synthesize shouldUseOpaqueBackground=_shouldUseOpaqueBackground - In the implementation block
@property (setter=_setLabel:,nonatomic,retain) UILabel * _label;                                  //@synthesize _label=__label - In the implementation block
@property (setter=_setDetailLabel:,nonatomic,retain) UILabel * _detailLabel;                      //@synthesize _detailLabel=__detailLabel - In the implementation block
@property (setter=_setIconImageView:,nonatomic,retain) UIImageView * _iconImageView;              //@synthesize _iconImageView=__iconImageView - In the implementation block
@property (setter=_setButton:,nonatomic,retain) UIButton * _button;                               //@synthesize _button=__button - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(id)_delegate;
-(void)setAttributedText:(id)arg1 ;
-(id)attributedText;
-(void)setTextAlignment:(int)arg1 ;
-(int)textAlignment;
-(int)buttonType;
-(id)iconImage;
-(void)setContentInsets:(UIEdgeInsets)arg1 ;
-(UIEdgeInsets)contentInsets;
-(void)setNumberOfTextLines:(int)arg1 ;
-(void)setShouldUseOpaqueBackground:(BOOL)arg1 ;
-(void)setTappableArea:(int)arg1 ;
-(void)setAttributedDetailText:(id)arg1 ;
-(void)setNumberOfDetailTextLines:(int)arg1 ;
-(void)setTextDetailTextSpacing:(float)arg1 ;
-(void)setIconImage:(id)arg1 ;
-(void)setIconLocation:(int)arg1 ;
-(void)setIconPadding:(UIEdgeInsets)arg1 ;
-(void)setIconOffset:(UIOffset)arg1 ;
-(void)setButtonType:(int)arg1 animated:(BOOL)arg2 ;
-(void)setButtonSize:(int)arg1 ;
-(void)setButtonHorizontalAlignment:(int)arg1 ;
-(void)setButtonOffset:(UIOffset)arg1 ;
-(void)setButtonPadding:(float)arg1 ;
-(void)setButtonType:(int)arg1 ;
-(BOOL)shouldRecognizerTap:(id)arg1 ;
-(void)_setLabel:(id)arg1 ;
-(id)_label;
-(id)_labelBackgroundColor;
-(int)numberOfTextLines;
-(void)_updateDetailLabel;
-(id)_detailLabel;
-(void)_updateIconImageView;
-(void)_updateButtonAnimated:(BOOL)arg1 ;
-(id)_button;
-(int)iconLocation;
-(UIEdgeInsets)iconPadding;
-(int)buttonSize;
-(CGSize)_textSizeForButtonWithType:(int)arg1 size:(int)arg2 ;
-(CGSize)_maximumPossibleTextSizeForButtonWithType:(int)arg1 size:(int)arg2 ;
-(int)buttonHorizontalAlignment;
-(UIOffset)buttonOffset;
-(float)buttonPadding;
-(float)textDetailTextSpacing;
-(UIOffset)iconOffset;
-(id)_iconImageView;
-(int)tappableArea;
-(void)_updateLabelsBackgroundColor;
-(id)attributedDetailText;
-(int)numberOfDetailTextLines;
-(void)_setDetailLabel:(id)arg1 ;
-(void)_setIconImageView:(id)arg1 ;
-(void)_handleButton:(id)arg1 ;
-(void)_setButton:(id)arg1 ;
-(void)_configureButton:(id)arg1 withType:(int)arg2 size:(int)arg3 animated:(BOOL)arg4 ;
-(BOOL)shouldUseOpaqueBackground;
-(void).cxx_destruct;
@end

