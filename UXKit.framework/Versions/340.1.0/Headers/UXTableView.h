//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  5 2015 02:41:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UXKit/UXCollectionView.h>

@class NSColor, NSIndexPath, NSMenu;
@protocol UXTableViewDataSource, UXTableViewDelegate;

@class UXCollectionViewLayout;
@class UXTableView;
@class UXTableViewCell;

@protocol UXTableViewDataSource <NSObject>

- (NSInteger)tableView:(UXTableView *)tableView numberOfRowsInSection:(NSInteger)section;
- (UXTableViewCell *)tableView:(UXTableView *)tableView cellForRowAtIndexPath:(NSIndexPath *)indexPath;

@optional
- (NSInteger)numberOfSectionsInTableView:(UXTableView *)tableView;

- (BOOL)tableView:(UXTableView *)tableView canEditRowAtIndexPath:(NSIndexPath *)indexPath;
- (void)tableView:(UXTableView *)tableView commitEditingStyle:(NSInteger)editingStyle forRowAtIndexPath:(NSIndexPath *)indexPath; // TODO: enum

@end

@protocol UXTableViewDelegate <NSObject>
@optional
- (NSString *)tableView:(UXTableView *)tableView titleForHeaderInSection:(NSInteger)section;
- (NSView *)tableView:(UXTableView *)tableView viewForHeaderInSection:(NSInteger)section;

- (CGFloat)tableView:(UXTableView *)tableView heightForRowAtIndexPath:(NSIndexPath *)indexPath;
- (CGFloat)tableView:(UXTableView *)tableView heightForHeaderInSection:(NSInteger)section;

- (BOOL)tableView:(UXTableView *)tableView shouldHighlightRowAtIndexPath:(NSIndexPath *)indexPath;
- (void)tableView:(UXTableView *)tableView didHighlightRowAtIndexPath:(NSIndexPath *)indexPath;
- (void)tableView:(UXTableView *)tableView didUnhighlightRowAtIndexPath:(NSIndexPath *)indexPath;

- (void)tableView:(UXTableView *)tableView didSelectRowAtIndexPath:(NSIndexPath *)indexPath;
- (void)tableView:(UXTableView *)tableView didDeselectRowAtIndexPath:(NSIndexPath *)indexPath;

- (NSInteger)tableView:(UXTableView *)tableView editingStyleForRowAtIndexPath:(NSIndexPath *)indexPath; // TODO: enum
@end

@interface UXTableView : UXCollectionView
{
    struct {
        unsigned int delegateImplementsTitleForHeaderInSection:1;
        unsigned int delegateImplementsTitleForFooterInSection:1;
        unsigned int delegateImplementsHeaderViewForSection:1;
        unsigned int delegateImplementsFooterViewForSection:1;
        unsigned int delegateImplementsHeightForHeaderInSection:1;
        unsigned int delegateImplementsHeightForRowAtIndexPath:1;
        unsigned int delegateImplementsDidSelectionRowAtIndexPath:1;
        unsigned int delegateImplementsShouldHighlightRowAtIndexPath:1;
        unsigned int delegateImplementsDidHighlightRowAtIndexPath:1;
        unsigned int delegateImplementsDidUnhighlightRowAtIndexPath:1;
        unsigned int delegateImplementsEditingStyleForRowAtIndexPath:1;
        unsigned int delegateImplementsDidDeselectRowAtIndexPath:1;
    } _tableViewDelegateFlags;
    struct {
        unsigned int dataSourceImplementsNumberOfSectionsInTableView:1;
        unsigned int dataSourceImplementsCanEditRowAtIndexPath:1;
        unsigned int dataSourceImplementsCommitEditingStyleForRowAtIndexPath:1;
    } _tableViewDataSourceFlags;
    NSIndexPath *_highlightedIndexPath;
    NSMenu *_observedMenu;
    BOOL __floatingHeadersDisabled;
    id <UXTableViewDataSource> _tableViewDataSource;
    id <UXTableViewDelegate> _tableViewDelegate;
    double _rowHeight;
    long long _separatorStyle;
    NSColor *_separatorColor;
    struct NSEdgeInsets _separatorInset;
}

+ (unsigned long long)collectionViewScrollPositionFromScrollPosition:(long long)arg1;
+ (Class)documentClass;
@property(nonatomic, setter=_setFloatingHeadersDisabled:) BOOL _floatingHeadersDisabled; // @synthesize _floatingHeadersDisabled=__floatingHeadersDisabled;
@property(nonatomic) struct NSEdgeInsets separatorInset; // @synthesize separatorInset=_separatorInset;
@property(copy, nonatomic) NSColor *separatorColor; // @synthesize separatorColor=_separatorColor;
@property(nonatomic) long long separatorStyle; // @synthesize separatorStyle=_separatorStyle;
@property(nonatomic) double rowHeight; // @synthesize rowHeight=_rowHeight;
@property(nonatomic) __weak id <UXTableViewDelegate> tableViewDelegate; // @synthesize tableViewDelegate=_tableViewDelegate;
@property(nonatomic) __weak id <UXTableViewDataSource> tableViewDataSource; // @synthesize tableViewDataSource=_tableViewDataSource;

@property(nonatomic) double alpha;
- (void)_checkForAccessoryViewsInScrollerAreas;
- (void)collectionView:(id)arg1 layout:(id)arg2 supplementaryViewDidEndFloatingAtIndexPath:(id)arg3 kind:(id)arg4;
- (void)collectionView:(id)arg1 layout:(id)arg2 supplementaryViewDidBeginFloatingAtIndexPath:(id)arg3 kind:(id)arg4;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForFooterInSection:(long long)arg3;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForHeaderInSection:(long long)arg3;
- (void)collectionView:(id)arg1 itemWasRightClickedAtIndexPath:(id)arg2 withEvent:(id)arg3;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;
- (void)deleteWordBackward:(id)arg1;
- (void)moveRight:(id)arg1;
- (void)keyDown:(id)arg1;
- (void)mouseDragged:(id)arg1;
- (void)mouseUp:(id)arg1;
- (void)mouseDown:(id)arg1;
- (BOOL)acceptsFirstResponder;
- (id)menuForEvent:(id)arg1;
- (void)_menuDidEndTracking:(id)arg1;
- (void)_menuDidBeginTracking:(id)arg1;
- (void)scrollToRowAtIndexPath:(id)arg1 atScrollPosition:(long long)arg2 animated:(BOOL)arg3;
- (void)deselectRowAtIndexPath:(id)arg1 animated:(BOOL)arg2;
- (void)selectRowAtIndexPath:(id)arg1 animated:(BOOL)arg2 scrollPosition:(long long)arg3;
- (id)indexPathForSelectedRow;
- (id)indexPathForClickedRow;
- (id)footerViewForSection:(long long)arg1;
- (id)headerViewForSection:(long long)arg1;
- (void)moveRowAtIndexPath:(id)arg1 toIndexPath:(id)arg2;
- (void)reloadRowsAtIndexPaths:(id)arg1 withRowAnimation:(long long)arg2;
- (void)deleteRowsAtIndexPaths:(id)arg1 withRowAnimation:(long long)arg2;
- (void)insertRowsAtIndexPaths:(id)arg1 withRowAnimation:(long long)arg2;
- (void)deleteSections:(id)arg1 withRowAnimation:(long long)arg2;
- (void)insertSections:(id)arg1 withRowAnimation:(long long)arg2;
- (void)endUpdates;
- (void)beginUpdates;
- (id)indexPathsForVisibleRows;
- (void)sizeToFit;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (long long)numberOfRowsInSection:(long long)arg1;
- (id)dequeueReusableHeaderFooterViewWithIdentifier:(id)arg1;
- (id)dequeueReusableHeaderFooterViewWithReuseIdentifier:(id)arg1 forSection:(long long)arg2;
- (id)dequeueReusableCellWithReuseIdentifier:(id)arg1 forIndexPath:(id)arg2;
- (id)dequeueReusableCellWithIdentifier:(id)arg1;
- (id)dequeueReusableCellWithIdentifier:(id)arg1 forIndexPath:(id)arg2;
- (void)registerClass:(Class)arg1 forHeaderFooterViewReuseIdentifier:(id)arg2;
- (void)registerClass:(Class)arg1 forCellReuseIdentifier:(id)arg2;
- (id)cellForRowAtIndexPath:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDataSource:(id)arg1;
- (BOOL)overdrawEnabled;
- (void)setOverdrawEnabled:(BOOL)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1 style:(long long)arg2;
- (id)initWithFrame:(struct CGRect)arg1 collectionViewLayout:(id)arg2;
- (void)setNeedsDisplay:(BOOL)arg1;
@property(nonatomic, getter=isUserInteractionEnabled) BOOL userInteractionEnabled;

@end

