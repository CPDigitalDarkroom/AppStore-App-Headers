/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, May 18, 2016 at 11:45:33 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/D2238F36-ED84-40F4-9CB2-8C71CACC8B47/Spotify.app/Spotify
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>
#import <Spotify/SPTEventsLocationSearchViewModelDelegate.h>
#import <UIKit/UISearchBarDelegate.h>
#import <UIKit/UITableViewDataSource.h>
#import <UIKit/UITableViewDelegate.h>
#import <Spotify/SPContentInsetViewController.h>

@protocol SPTEventsLocationSearchViewControllerDelegate;
@class SPTEventsLocationSearchViewModel, SPTViewLogger, SPTClientEventLogger, NSArray, SPTTableView, SPTSearchBar, NSTimer, UIView, UILabel, SPTProgressView, NSString;

@interface SPTEventsLocationSearchViewController : UIViewController <SPTEventsLocationSearchViewModelDelegate, UISearchBarDelegate, UITableViewDataSource, UITableViewDelegate, SPContentInsetViewController> {

	char _selectedBeforeLeavingView;
	id<SPTEventsLocationSearchViewControllerDelegate> _delegate;
	SPTEventsLocationSearchViewModel* _viewModel;
	SPTViewLogger* _viewLogger;
	SPTClientEventLogger* _clientEventLogger;
	NSArray* _currentLayoutConstraints;
	SPTTableView* _tableView;
	SPTSearchBar* _searchBar;
	NSTimer* _searchTimer;
	UIView* _errorView;
	UILabel* _errorLabel;
	SPTProgressView* _progressView;

}

@property (assign,nonatomic,__weak) id<SPTEventsLocationSearchViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) SPTEventsLocationSearchViewModel * viewModel;                                   //@synthesize viewModel=_viewModel - In the implementation block
@property (nonatomic,retain) SPTViewLogger * viewLogger;                                                     //@synthesize viewLogger=_viewLogger - In the implementation block
@property (nonatomic,retain) SPTClientEventLogger * clientEventLogger;                                       //@synthesize clientEventLogger=_clientEventLogger - In the implementation block
@property (nonatomic,retain) NSArray * currentLayoutConstraints;                                             //@synthesize currentLayoutConstraints=_currentLayoutConstraints - In the implementation block
@property (nonatomic,retain) SPTTableView * tableView;                                                       //@synthesize tableView=_tableView - In the implementation block
@property (nonatomic,retain) SPTSearchBar * searchBar;                                                       //@synthesize searchBar=_searchBar - In the implementation block
@property (nonatomic,retain) NSTimer * searchTimer;                                                          //@synthesize searchTimer=_searchTimer - In the implementation block
@property (assign,nonatomic) char selectedBeforeLeavingView;                                                 //@synthesize selectedBeforeLeavingView=_selectedBeforeLeavingView - In the implementation block
@property (nonatomic,retain) UIView * errorView;                                                             //@synthesize errorView=_errorView - In the implementation block
@property (nonatomic,retain) UILabel * errorLabel;                                                           //@synthesize errorLabel=_errorLabel - In the implementation block
@property (nonatomic,retain) SPTProgressView * progressView;                                                 //@synthesize progressView=_progressView - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) char automaticallyAdjustsScrollViewInsets; 
-(SPTClientEventLogger *)clientEventLogger;
-(void)sp_updateContentInsets;
-(unsigned)preferredNavigationBarState;
-(SPTViewLogger *)viewLogger;
-(int)stackedNavigationPageSize;
-(void)setClientEventLogger:(SPTClientEventLogger *)arg1 ;
-(void)setViewLogger:(SPTViewLogger *)arg1 ;
-(void)eventsLocationSearchViewModel:(id)arg1 isLoading:(char)arg2 ;
-(void)eventsLocationSearchViewModel:(id)arg1 loadedResultsWithError:(id)arg2 ;
-(void)eventsLocationSearchViewModel:(id)arg1 failedWithError:(id)arg2 ;
-(NSArray *)currentLayoutConstraints;
-(void)setCurrentLayoutConstraints:(NSArray *)arg1 ;
-(id)initWithViewModel:(id)arg1 viewLogger:(id)arg2 clientEventLogger:(id)arg3 ;
-(NSTimer *)searchTimer;
-(char)selectedBeforeLeavingView;
-(void)setSelectedBeforeLeavingView:(char)arg1 ;
-(void)showViewForError:(id)arg1 ;
-(void)setSearchTimer:(NSTimer *)arg1 ;
-(void)selectedLocationAtIndex:(unsigned)arg1 ;
-(SPTEventsLocationSearchViewModel *)viewModel;
-(void)setViewModel:(SPTEventsLocationSearchViewModel *)arg1 ;
-(void)setDelegate:(id<SPTEventsLocationSearchViewControllerDelegate>)arg1 ;
-(void)dealloc;
-(float)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(int)numberOfSectionsInTableView:(id)arg1 ;
-(id<SPTEventsLocationSearchViewControllerDelegate>)delegate;
-(void)viewWillLayoutSubviews;
-(SPTTableView *)tableView;
-(void)setTableView:(SPTTableView *)arg1 ;
-(void)viewWillAppear:(char)arg1 ;
-(void)viewDidLoad;
-(void)viewDidAppear:(char)arg1 ;
-(void)viewWillDisappear:(char)arg1 ;
-(SPTSearchBar *)searchBar;
-(void)updateViewConstraints;
-(void)setProgressView:(SPTProgressView *)arg1 ;
-(SPTProgressView *)progressView;
-(void)searchBar:(id)arg1 textDidChange:(id)arg2 ;
-(void)searchBarSearchButtonClicked:(id)arg1 ;
-(void)setSearchBar:(SPTSearchBar *)arg1 ;
-(void)performSearch;
-(void)setErrorLabel:(UILabel *)arg1 ;
-(UILabel *)errorLabel;
-(void)setErrorView:(UIView *)arg1 ;
-(UIView *)errorView;
@end

