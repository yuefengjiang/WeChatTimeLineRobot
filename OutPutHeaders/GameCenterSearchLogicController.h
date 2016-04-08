/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "WeChat-Structs.h"
#import "IGameCenterExt.h"
#import "UISearchBarDelegate.h"
#import "UISearchDisplayDelegate.h"
#import "UITableViewDelegate.h"
#import "UITableViewDataSource.h"
#import "MMObject.h"

@class UISearchDisplayController, UITableView, NSString, MMUISearchBar, GameSearchRecommendItem, NSMutableArray;
@protocol GameCenterSearchLogicControllerDelegate;

@interface GameCenterSearchLogicController : MMObject <UITableViewDelegate, UITableViewDataSource, UISearchBarDelegate, UISearchDisplayDelegate, IGameCenterExt> {
	BOOL _isHeaderView;
	NSMutableArray* _resultGroupList;
	UISearchDisplayController* _searchDisplayController;
	UITableView* _recommendTableView;
	unsigned long _searchScene;
	GameSearchRecommendItem* _smartBoxData;
	GameSearchRecommendItem* _rcmData;
	int _resultType;
	int _sourceScene;
	BOOL _isNoResult;
	MMUISearchBar* _searchBar;
	id<GameCenterSearchLogicControllerDelegate> _delegate;
	NSString* _searchKeyword;
	int _returnKeyType;
	NSString* _searchPlaceholder;
}
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign) Class superclass;
@property(readonly, assign) unsigned hash;
@property(assign, nonatomic) BOOL isNoResult;
@property(retain, nonatomic) NSString* searchPlaceholder;
@property(assign, nonatomic) int returnKeyType;
@property(retain, nonatomic) NSString* searchKeyword;
@property(assign, nonatomic) __weak id<GameCenterSearchLogicControllerDelegate> delegate;
@property(retain, nonatomic) MMUISearchBar* searchBar;
-(void).cxx_destruct;
-(void)onGameSearchSmartBox:(id)box returnKeywords:(id)keywords descriptions:(id)descriptions error:(int)error;
-(void)onGameSearchFinishedWithResultGroups:(id)resultGroups searchWithText:(id)text error:(int)error;
-(void)cancelSearch;
-(void)searchBarDidEndSearch;
-(void)searchBarBecomeFirstResponder;
-(void)resetRecommendGamesAndShowRecommendTableView;
-(void)popupSearchBar;
-(void)hideDimmingView:(id)view;
-(void)adjustDimmingView:(id)view;
-(void)finishSearch;
-(void)removeNoResultLabelWhenSearching;
-(void)searchDisplayController:(id)controller didShowSearchResultsTableView:(id)view;
-(void)searchDisplayController:(id)controller willShowSearchResultsTableView:(id)view;
-(void)scrollViewWillBeginDragging:(id)scrollView;
-(void)searchDisplayControllerWillEndSearch:(id)searchDisplayController;
-(void)searchDisplayControllerWillBeginSearch:(id)searchDisplayController;
-(void)searchDisplayControllerDidBeginSearch:(id)searchDisplayController;
-(BOOL)searchBarShouldEndEditing:(id)searchBar;
-(BOOL)searchBarShouldBeginEditing:(id)searchBar;
-(void)searchBarTextDidBeginEditing:(id)searchBarText;
-(void)searchBarCancelButtonClicked:(id)clicked;
-(void)searchBar:(id)bar textDidChange:(id)text;
-(void)searchBarSearchButtonClicked:(id)clicked;
-(void)tableView:(id)view didSelectRowAtIndexPath:(id)indexPath;
-(float)tableView:(id)view heightForRowAtIndexPath:(id)indexPath;
-(id)tableView:(id)view viewForHeaderInSection:(int)section;
-(id)sessionHeaderViewForSearchResult:(id)searchResult;
-(id)sessionHeaderViewForSmartBox:(id)smartBox;
-(float)tableView:(id)view heightForHeaderInSection:(int)section;
-(void)onOpenSearchWebResultItem:(id)item;
-(void)onOpenSearchGameResultItem:(id)item searchWord:(id)word sourceScene:(int)scene;
-(void)handleShowMore:(id)more;
-(void)handleSearchWebResultItem:(id)item;
-(void)handleSearchGameResultItem:(id)item searchWord:(id)word sourceScene:(int)scene;
-(void)loadSubviewsForSearchCell:(id)searchCell similarResultItem:(id)item separatorX:(float)x;
-(void)loadSubviewsForSearchCell:(id)searchCell webResultItem:(id)item separatorX:(float)x;
-(void)loadSubviewsForSearchCell:(id)searchCell gameResultItem:(id)item separatorX:(float)x;
-(void)loadSubviewsForSearchCell:(id)searchCell showMore:(id)more;
-(void)loadSubviewsForSearchCell:(id)searchCell resultTips:(id)tips;
-(void)loadSubviewsForSearchCell:(id)searchCell separatorColor:(id)color;
-(id)tableView:(id)view cellForRowAtIndexPath:(id)indexPath;
-(id)cellForSmartBoxResult:(id)smartBoxResult IndexPath:(id)path;
-(id)cellForSmartBox:(id)smartBox IndexPath:(id)path;
-(id)cellForSearchResult:(id)searchResult IndexPath:(id)path;
-(int)tableView:(id)view numberOfRowsInSection:(int)section;
-(int)numberOfSectionsInTableView:(id)tableView;
-(void)keyboardWillShow;
-(void)dealloc;
-(void)relayoutSubviews;
-(id)initWithContentsController:(id)contentsController isHeaderView:(BOOL)view sourceScene:(int)scene;
@end
