/**
 * This header is generated by class-dump-z 0.1-11o.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 */

#import "ChatKit-Structs.h"
#import "CKBalloonView.h"

@class NSString, UIImage;

@interface CKGenericFileBalloonView : CKBalloonView {
	UIImage* _icon;
	NSString* _text;
	NSString* _subtext;
	CGFloat _originalWidth;
}
@property(copy, nonatomic) NSString* text;
@property(copy, nonatomic) NSString* subtext;
@property(retain, nonatomic) UIImage* icon;
+(CGPoint)offsetForBubbleInsetAtPoint:(CGPoint)point;
+(CGFloat)additionalHeightForBubbleWhenInsetAtPoint:(CGPoint)point;
+(CGFloat)fixedHeight;
+(BOOL)shouldHaveAccessoryDiclosure;
-(id)initWithFrame:(CGRect)frame delegate:(id)delegate;
-(void)dealloc;
-(void)drawRect:(CGRect)rect;
-(CGFloat)tightenedWidth;
-(void)tighten;
-(id)_titleFont;
-(id)_subtitleFont;
-(CGRect)_iconRect;
-(CGRect)_textRect;
-(CGRect)_subtextRect;
@end

