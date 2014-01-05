/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import <Foundation/Foundation.h>
#import "SBIconIndexMutableListObserver-Protocol.h"
#import "SBIconIndexNode-Protocol.h"

@class NSHashTable, SBIcon, SBFolder, SBIconIndexMutableList;

@interface SBIconListModel : NSObject <SBIconIndexNode, SBIconIndexMutableListObserver, NSFastEnumeration>
{
    SBIconIndexMutableList *_icons;
    NSHashTable *_nodeObservers;
    NSHashTable *_listObservers;
    BOOL _iconStateIsDirty;
    SBFolder *_folder;
}

+ (NSUInteger)maxIcons;
+ (Class)viewClass;

- (void)list:(id)arg1 didRemoveContainedNodeIdentifiers:(id)arg2;
- (void)list:(id)arg1 didAddContainedNodeIdentifiers:(id)arg2;
- (id)nodeDescriptionWithPrefix:(id)arg1;
- (void)removeNodeObserver:(id)arg1;
- (void)addNodeObserver:(id)arg1;
- (id)nodesAlongIndexPath:(id)arg1 consumedIndexes:(NSUInteger)arg2;
- (id)indexPathsForContainedNodeIdentifier:(id)arg1 prefixPath:(id)arg2;
- (id)containedNodeIdentifiers;
- (BOOL)containsNodeIdentifier:(id)identifier;
- (id)nodeIdentifier;
- (void)_notifyListObservers:(id)arg1;
- (void)removeListObserver:(id)arg1;
- (void)addListObserver:(id)arg1;
- (void)warmUpIconImages;
- (BOOL)matchesRepresentation:(id)arg1;
- (id)representation;
- (BOOL)resetWithRepresentation:(id)repr model:(id)model overflowNodes:(id)nodes leafIdentifiersAdded:(id)idents;
- (void)markIconStateClean;
- (BOOL)isIconStateDirty;
- (NSArray *)iconsOfClass:(Class)cls;
- (NSUInteger)compactIcons;
- (BOOL)needsCompacting;
- (BOOL)isFull;
- (BOOL)isEmpty;
- (NSUInteger)firstFreeSlotIndexForType:(int)arg1;
- (NSUInteger)firstFreeSlotIndex;
- (void)removeIcon:(SBIcon *)icon;
- (void)removeIconAtIndex:(NSUInteger)idx;
- (id)insertIcon:(SBIcon *)icon atIndex:(NSUInteger *)insertionIndex;
- (id)placeIcon:(SBIcon *)icon atIndex:(NSUInteger *)placementIndex;
- (BOOL)addIcon:(SBIcon *)icon asDirty:(BOOL)dirty;
- (BOOL)addIcon:(SBIcon *)icon;
- (BOOL)allowsAddingIcon:(SBIcon *)icon;
- (BOOL)containsLeafIconWithIdentifier:(NSString *)ident;
- (BOOL)containsIcon:(SBIcon *)icon;
- (NSUInteger)indexForLeafIconWithIdentifier:(NSString *)ident;
- (NSUInteger)indexForIcon:(SBIcon *)icon;
- (SBIcon *)iconAtIndex:(NSUInteger)idx;
- (NSArray *)icons;
- (NSUInteger)numberOfIcons;
- (SBFolder *)folder;

- (instancetype)initWithFolder:(SBFolder *)folder;

@end

