/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "UIViewController.h"

#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class NSArray, NSMutableArray, NSString, UITableView, UIView;

@interface PLSlideshowTransitionsViewController : UIViewController <UITableViewDataSource, UITableViewDelegate>
{
    UIView *_containerView;
    UITableView *_table;
    NSMutableArray *_tableCells;
    NSArray *_transitionKeys;
    NSArray *_alternateLocalizations;
    NSString *_selectedTransition;
}

@property(retain, nonatomic) NSArray *alternateLocalizations; // @synthesize alternateLocalizations=_alternateLocalizations;
@property(retain, nonatomic) NSArray *transitionKeys; // @synthesize transitionKeys=_transitionKeys;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (struct CGSize)contentSizeForViewInPopoverView;
@property(retain, nonatomic) NSString *selectedTransition;
- (void)_configureTableCells;
- (void)setTransitionKeys:(id)arg1 alternateLocalizations:(id)arg2;
- (void)dealloc;
- (void)viewDidUnload;
- (void)loadView;
- (id)initWithTransitions:(id)arg1 alternateTransitionLocalizations:(id)arg2;

@end

