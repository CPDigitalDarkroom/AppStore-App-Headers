/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, May 18, 2016 at 11:45:45 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/D2238F36-ED84-40F4-9CB2-8C71CACC8B47/Spotify.app/Spotify
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Spotify/Spotify-Structs.h>
#import <Spotify/SPTSearchViewController.h>
#import <UIKit/UISearchBarDelegate.h>
#import <UIKit/UIGestureRecognizerDelegate.h>
#import <Spotify/SPContentInsetViewController.h>
#import <Spotify/SPTSearchHistoryViewControllerDelegate.h>
#import <UIKit/UIPopoverControllerDelegate.h>
#import <UIKit/UITableViewDelegate.h>
#import <Spotify/SearchViewModelDelegate.h>
#import <Spotify/SPTSearchPlayerDelegate.h>
#import <Spotify/SPTTableViewContinuousSwipeDelegate.h>

@protocol SPContextMenuFeature, SPTPodcastContextMenuProvider, SPTContextMenuViewControllerFactory;
@class SPTTableView, SPTSearchBar, UIActivityIndicatorView, SPTInfoView, SPTSearchHistoryViewController, UIViewController, MetaViewController, SPTSearchHeaderView, SPTPopoverController, NSString;

@interface SPTSearchTableViewController : SPTSearchViewController <UISearchBarDelegate, UIGestureRecognizerDelegate, SPContentInsetViewController, SPTSearchHistoryViewControllerDelegate, UIPopoverControllerDelegate, UITableViewDelegate, SearchViewModelDelegate, SPTSearchPlayerDelegate, SPTTableViewContinuousSwipeDelegate> {

	char _searchBarAsNavigationItemTitle;
	char _presentedInPopover;
	char _initialContentVisible;
	char _isPresentingContextMenu;
	char _bottomTabBarEnabled;
	char _browseInSearchEnabled;
	SPTTableView* _tableView;
	id<SPContextMenuFeature> _contextMenu;
	id<SPTPodcastContextMenuProvider> _episodeContextMenuProvider;
	SPTSearchBar* _searchBar;
	UIActivityIndicatorView* _loadingView;
	SPTInfoView* _infoView;
	SPTSearchHistoryViewController* _searchHistoryViewController;
	UIViewController* _browseViewController;
	UIViewController* _initialContentViewController;
	MetaViewController* _metaViewController;
	SPTSearchHeaderView* _headerView;
	id<SPTContextMenuViewControllerFactory> _contextMenuViewControllerFactory;
	SPTPopoverController* _contextMenuPopoverController;
	id _playerObservation;
	float _keyboardHeight;
	float _externalBottomContentInset;

}

@property (nonatomic,readonly) char shouldDismissKeyboardWhenSearching; 
@property (nonatomic,readonly) char shouldDismissKeyboardWhenScrollingContent; 
@property (nonatomic,readonly) char shouldDismissKeyboardWhenSelectingSearchResultRow; 
@property (nonatomic,readonly) char shouldDismissKeyboardWhenSelectingSearchHistoryRow; 
@property (nonatomic,readonly) char shouldDismissKeyboardWhenTappingHeaderOrFooter; 
@property (nonatomic,readonly) char shouldAdjustViewsForKeyboard; 
@property (nonatomic,retain) SPTTableView * tableView;                                                              //@synthesize tableView=_tableView - In the implementation block
@property (assign,nonatomic) char searchBarAsNavigationItemTitle;                                                   //@synthesize searchBarAsNavigationItemTitle=_searchBarAsNavigationItemTitle - In the implementation block
@property (assign,getter=isPresentedInPopover,nonatomic) char presentedInPopover;                                   //@synthesize presentedInPopover=_presentedInPopover - In the implementation block
@property (assign,nonatomic,__weak) id<SPContextMenuFeature> contextMenu;                                           //@synthesize contextMenu=_contextMenu - In the implementation block
@property (nonatomic,retain) id<SPTPodcastContextMenuProvider> episodeContextMenuProvider;                          //@synthesize episodeContextMenuProvider=_episodeContextMenuProvider - In the implementation block
@property (nonatomic,retain) SPTSearchBar * searchBar;                                                              //@synthesize searchBar=_searchBar - In the implementation block
@property (nonatomic,retain) UIActivityIndicatorView * loadingView;                                                 //@synthesize loadingView=_loadingView - In the implementation block
@property (nonatomic,retain) SPTInfoView * infoView;                                                                //@synthesize infoView=_infoView - In the implementation block
@property (nonatomic,retain) SPTSearchHistoryViewController * searchHistoryViewController;                          //@synthesize searchHistoryViewController=_searchHistoryViewController - In the implementation block
@property (nonatomic,retain) UIViewController * browseViewController;                                               //@synthesize browseViewController=_browseViewController - In the implementation block
@property (nonatomic,retain) UIViewController * initialContentViewController;                                       //@synthesize initialContentViewController=_initialContentViewController - In the implementation block
@property (assign,getter=isInitialContentVisible,nonatomic) char initialContentVisible;                             //@synthesize initialContentVisible=_initialContentVisible - In the implementation block
@property (assign,nonatomic,__weak) MetaViewController * metaViewController;                                        //@synthesize metaViewController=_metaViewController - In the implementation block
@property (nonatomic,retain) SPTSearchHeaderView * headerView;                                                      //@synthesize headerView=_headerView - In the implementation block
@property (nonatomic,retain) id<SPTContextMenuViewControllerFactory> contextMenuViewControllerFactory;              //@synthesize contextMenuViewControllerFactory=_contextMenuViewControllerFactory - In the implementation block
@property (nonatomic,retain) SPTPopoverController * contextMenuPopoverController;                                   //@synthesize contextMenuPopoverController=_contextMenuPopoverController - In the implementation block
@property (nonatomic,retain) id playerObservation;                                                                  //@synthesize playerObservation=_playerObservation - In the implementation block
@property (assign,nonatomic) float keyboardHeight;                                                                  //@synthesize keyboardHeight=_keyboardHeight - In the implementation block
@property (assign,nonatomic) float externalBottomContentInset;                                                      //@synthesize externalBottomContentInset=_externalBottomContentInset - In the implementation block
@property (assign,nonatomic) char isPresentingContextMenu;                                                          //@synthesize isPresentingContextMenu=_isPresentingContextMenu - In the implementation block
@property (getter=isBottomTabBarEnabled,nonatomic,readonly) char bottomTabBarEnabled;                               //@synthesize bottomTabBarEnabled=_bottomTabBarEnabled - In the implementation block
@property (assign,getter=isBrowseInSearchEnabled,nonatomic) char browseInSearchEnabled;                             //@synthesize browseInSearchEnabled=_browseInSearchEnabled - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) char automaticallyAdjustsScrollViewInsets; 
-(char)shouldRemoveAllNotificationObserversInViewWillDisappear;
-(void)applyThemeLayout;
-(int)stackedNavigationPageSize;
-(void)viewDidBecomeInactiveInStackedNavigation;
-(void)viewDidBecomeActiveInStackedNavigation;
-(char)isBottomTabBarEnabled;
-(MetaViewController *)metaViewController;
-(void)setMetaViewController:(MetaViewController *)arg1 ;
-(void)sp_updateBottomContentInset:(float)arg1 ;
-(void)setContextMenu:(id<SPContextMenuFeature>)arg1 ;
-(id<SPContextMenuFeature>)contextMenu;
-(char)continuousSwipeEnabledForTableView:(id)arg1 ;
-(SPTPopoverController *)contextMenuPopoverController;
-(void)setContextMenuPopoverController:(SPTPopoverController *)arg1 ;
-(void)hideInfoView;
-(void)tableViewLongPressed:(id)arg1 ;
-(id<SPTPodcastContextMenuProvider>)episodeContextMenuProvider;
-(id<SPTContextMenuViewControllerFactory>)contextMenuViewControllerFactory;
-(void)setContextMenuViewControllerFactory:(id<SPTContextMenuViewControllerFactory>)arg1 ;
-(void)registerNotificationObservers;
-(void)infoViewErrorButtonTapped;
-(void)performSearchWithString:(id)arg1 delayed:(char)arg2 ;
-(void)updateViewWithError:(id)arg1 scrollResultsViewToTop:(char)arg2 ;
-(void)setSearchBarAsNavigationItemTitle:(char)arg1 ;
-(char)searchBarAsNavigationItemTitle;
-(char)isPresentedInPopover;
-(void)setPresentedInPopover:(char)arg1 ;
-(void)setInitialContentViewController:(UIViewController *)arg1 ;
-(void)createSearchBarIfNeeded;
-(char)isPresentingContextMenu;
-(void)presentContextMenuPopoverForRowAtIndexPath:(id)arg1 ;
-(char)shouldDismissKeyboardWhenTappingHeaderOrFooter;
-(char)shouldShowSearchResults;
-(void)layoutOverlayViewsAnimated:(char)arg1 duration:(double)arg2 curve:(int)arg3 ;
-(void)goOnlineButtonTapped;
-(SPTSearchHistoryViewController *)searchHistoryViewController;
-(void)updateTableViewContentInsets;
-(float)viewContentTopInset;
-(float)keyboardHeight;
-(float)viewContentBottomInset;
-(UIViewController *)initialContentViewController;
-(void)configureInfoView:(id)arg1 forSearchInfoType:(unsigned)arg2 ;
-(void)hideTableViews;
-(id)createGoOnlineButton;
-(void)setInitialContentVisible:(char)arg1 ;
-(char)isBrowseInSearchEnabled;
-(float)externalBottomContentInset;
-(void)showSearchLoadingView;
-(void)showInfoViewOfSearchInfoType:(unsigned)arg1 ;
-(void)showSearchLoadingViewAfterDelay:(char)arg1 ;
-(void)showSearchResultsAndScrollTableViewToTop:(char)arg1 ;
-(char)isInitialContentVisible;
-(void)hideSearchLoadingView;
-(char)shouldSwapInitialContentViewController:(id)arg1 withViewController:(id)arg2 ;
-(void)updateContentViewController:(id)arg1 ;
-(UIViewController *)browseViewController;
-(void)searchStringDidChange:(id)arg1 fromSearchHistory:(char)arg2 ;
-(void)tableHeaderOrFooterTapped;
-(void)saveSearchStringToHistory;
-(char)shouldDismissKeyboardWhenSelectingSearchResultRow;
-(char)shouldLoadNextDatasetWhenScrolling;
-(char)shouldDismissKeyboardWhenScrollingContent;
-(char)shouldDismissKeyboardWhenSelectingSearchHistoryRow;
-(char)shouldAdjustViewsForKeyboard;
-(void)setKeyboardHeight:(float)arg1 ;
-(void)setExternalBottomContentInset:(float)arg1 ;
-(void)setIsPresentingContextMenu:(char)arg1 ;
-(char)searchHistoryViewControllerShouldDisplayHeaderView:(id)arg1 ;
-(char)searchHistoryViewControllerShouldUseMomentsAdaptedTexts:(id)arg1 ;
-(void)searchHistoryViewControllerDidStartScrolling:(id)arg1 ;
-(void)searchHistoryViewController:(id)arg1 didSelectSavedSearchString:(id)arg2 ;
-(void)searchHistoryViewControllerDidClearHistory:(id)arg1 ;
-(void)searchViewModel:(id)arg1 didUpdateWithError:(id)arg2 ;
-(id)searchViewModel:(id)arg1 indexPathForCell:(id)arg2 ;
-(id)provideCurrentCatalogForSearchViewModel:(id)arg1 ;
-(void)searchViewModel:(id)arg1 contextMenuButtonTappedInCellAtIndexPath:(id)arg2 ;
-(void)searchPlayer:(id)arg1 didChangeURL:(id)arg2 isPlaying:(char)arg3 ;
-(id)initWithViewModel:(id)arg1 searchHistory:(id)arg2 player:(id)arg3 audioTouch:(id)arg4 productState:(id)arg5 session:(id)arg6 metaViewController:(id)arg7 contextMenu:(id)arg8 episodeContextMenuProvider:(id)arg9 imageLoader:(id)arg10 navigationItem:(id)arg11 browseViewController:(id)arg12 isBrowseInSearchEnabled:(char)arg13 isBottomTabBarEnabled:(char)arg14 ;
-(void)infoViewGoToLocalFilesButtonTapped;
-(void)setEpisodeContextMenuProvider:(id<SPTPodcastContextMenuProvider>)arg1 ;
-(void)setSearchHistoryViewController:(SPTSearchHistoryViewController *)arg1 ;
-(void)setBrowseViewController:(UIViewController *)arg1 ;
-(id)playerObservation;
-(void)setPlayerObservation:(id)arg1 ;
-(void)setBrowseInSearchEnabled:(char)arg1 ;
-(char)shouldDismissKeyboardWhenSearching;
-(SPTInfoView *)infoView;
-(void)setInfoView:(SPTInfoView *)arg1 ;
-(void)dealloc;
-(void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3 ;
-(void)tableView:(id)arg1 didEndDisplayingCell:(id)arg2 forRowAtIndexPath:(id)arg3 ;
-(float)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(float)tableView:(id)arg1 heightForHeaderInSection:(int)arg2 ;
-(float)tableView:(id)arg1 heightForFooterInSection:(int)arg2 ;
-(id)tableView:(id)arg1 viewForHeaderInSection:(int)arg2 ;
-(id)tableView:(id)arg1 viewForFooterInSection:(int)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(void)scrollViewDidScroll:(id)arg1 ;
-(void)scrollViewWillBeginDragging:(id)arg1 ;
-(void)scrollViewWillEndDragging:(id)arg1 withVelocity:(CGPoint)arg2 targetContentOffset:(inout CGPoint*)arg3 ;
-(char)scrollViewShouldScrollToTop:(id)arg1 ;
-(char)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2 ;
-(void)loadView;
-(void)viewWillLayoutSubviews;
-(SPTTableView *)tableView;
-(void)setTableView:(SPTTableView *)arg1 ;
-(void)viewWillAppear:(char)arg1 ;
-(void)viewDidAppear:(char)arg1 ;
-(void)viewWillDisappear:(char)arg1 ;
-(void)viewDidDisappear:(char)arg1 ;
-(void)willAnimateRotationToInterfaceOrientation:(int)arg1 duration:(double)arg2 ;
-(SPTSearchBar *)searchBar;
-(void)keyboardDidShow:(id)arg1 ;
-(SPTSearchHeaderView *)headerView;
-(void)setHeaderView:(SPTSearchHeaderView *)arg1 ;
-(void)popoverControllerDidDismissPopover:(id)arg1 ;
-(void)searchBar:(id)arg1 textDidChange:(id)arg2 ;
-(void)searchBarCancelButtonClicked:(id)arg1 ;
-(void)searchBarTextDidBeginEditing:(id)arg1 ;
-(void)searchBarTextDidEndEditing:(id)arg1 ;
-(void)searchBarSearchButtonClicked:(id)arg1 ;
-(char)searchBar:(id)arg1 shouldChangeTextInRange:(NSRange)arg2 replacementText:(id)arg3 ;
-(void)setSearchBar:(SPTSearchBar *)arg1 ;
-(void)setLoadingView:(UIActivityIndicatorView *)arg1 ;
-(id)searchResultsView;
-(void)keyboardWillShow:(id)arg1 ;
-(void)keyboardWillHide:(id)arg1 ;
-(UIActivityIndicatorView *)loadingView;
@end

