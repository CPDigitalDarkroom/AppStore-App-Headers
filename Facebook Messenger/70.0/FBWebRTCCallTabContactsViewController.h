/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 14, 2016 at 2:21:55 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/B4BDDC65-4400-4BC5-A974-2245FB5B0846/MessengerCompressed-iphoneos-arm64,iphoneos-armv7.app/MessengerCompressed-iphoneos-arm64,iphoneos-armv7
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>
#import <MessengerCompressed-iphoneos-arm64,iphoneos-armv7/FBWebRTCRecentCallerViewModelListener.h>
#import <MessengerCompressed-iphoneos-arm64,iphoneos-armv7/MNPeopleCellDelegate.h>
#import <UIKit/UITableViewDataSource.h>
#import <UIKit/UITableViewDelegate.h>
#import <UIKit/UISearchBarDelegate.h>
#import <UIKit/UISearchDisplayDelegate.h>
#import <MessengerCompressed-iphoneos-arm64,iphoneos-armv7/MNPeopleSearchControllerDelegate.h>
#import <MessengerCompressed-iphoneos-arm64,iphoneos-armv7/MNPeopleSearchControllerRTCDelegate.h>
#import <MessengerCompressed-iphoneos-arm64,iphoneos-armv7/MNPeopleSearchResultsDataSourceRTCCallButtonDataSource.h>
#import <MessengerCompressed-iphoneos-arm64,iphoneos-armv7/FBClassProvidable.h>

@protocol FBWebRTCCallTabContactsViewControllerDelegate;
@class FBWebRTCCallController, FBWebRTCRecentCallerViewModel, FBWebRTCCallButtonImageProvider, FBWebRTCCallLogView, UITableView, UISearchBar, FBImageDownloader, MNDateFormatter, UISearchDisplayController, MNPeopleSearchController, MNPeopleCellFactory, MNCDNProfileImageDownloader, NSString;

@interface FBWebRTCCallTabContactsViewController : UIViewController <FBWebRTCRecentCallerViewModelListener, MNPeopleCellDelegate, UITableViewDataSource, UITableViewDelegate, UISearchBarDelegate, UISearchDisplayDelegate, MNPeopleSearchControllerDelegate, MNPeopleSearchControllerRTCDelegate, MNPeopleSearchResultsDataSourceRTCCallButtonDataSource, FBClassProvidable> {

	FBWebRTCCallController* _callController;
	FBWebRTCRecentCallerViewModel* _recentCallerViewModel;
	FBWebRTCCallButtonImageProvider* _callButtonImageProvider;
	FBWebRTCCallLogView* _callLogView;
	UITableView* _tableView;
	UISearchBar* _searchBar;
	FBImageDownloader* _imageDownloader;
	MNDateFormatter* _dateFormatter;
	UISearchDisplayController* _searchDisplayController;
	MNPeopleSearchController* _peopleSearchController;
	char _searching;
	MNPeopleCellFactory* _peopleCellFactory;
	MNCDNProfileImageDownloader* _profileImageDownloader;
	id<FBWebRTCCallTabContactsViewControllerDelegate> _delegate;
	unsigned _dialerMode;

}

@property (assign,nonatomic,__weak) id<FBWebRTCCallTabContactsViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) unsigned dialerMode;                                                            //@synthesize dialerMode=_dialerMode - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithProviderMapData:(id)arg1 ;
-(void)contextTappedForConversationContact:(id)arg1 ;
-(void)callButtonTappedForConversationContact:(id)arg1 isVideoCall:(char)arg2 ;
-(void)peopleCellActionButtonTappedForConversationContact:(id)arg1 ;
-(char)peopleSearchControllerShouldIncludeGroup:(id)arg1 ;
-(char)peopleSearchControllerShouldIncludePages:(id)arg1 ;
-(char)peopleSearchControllerShouldIncludeBlendedResults:(id)arg1 ;
-(id)searchTextForPeopleSearchController:(id)arg1 ;
-(id)pickedUserIdsForPeopleSearchController:(id)arg1 ;
-(void)peopleSearchControllerDidFinishSearch:(id)arg1 ;
-(char)peopleSearchController:(id)arg1 shouldSelectResultWhenTapped:(id)arg2 ;
-(void)peopleSearchController:(id)arg1 didSelectResult:(id)arg2 withAnalyticsExtras:(id)arg3 ;
-(char)peopleSearchController:(id)arg1 shouldShowResult:(id)arg2 ;
-(char)peopleSearchControllerShouldSearchServer:(id)arg1 ;
-(unsigned)surfaceForPeopleSearchSession;
-(id)initWithRecentCallerViewModel:(id)arg1 callController:(id)arg2 imageDownloader:(id)arg3 dateFormatter:(id)arg4 callButtonImageProvider:(id)arg5 peopleSearchController:(id)arg6 peopleCellFactory:(id)arg7 profileImageDownloader:(id)arg8 ;
-(void)didPressClose;
-(void)_endSearchSession;
-(void)_startSearchSession;
-(void)_startCallWithContact:(id)arg1 callType:(unsigned)arg2 ;
-(char)_isAudioCallingAvailable;
-(char)_isVideoCallingAvailable;
-(void)_configreCellForDialerMode:(id)arg1 ;
-(char)_isVideoCall:(unsigned)arg1 ;
-(void)peopleSearchController:(id)arg1 didTapCallButtonForContact:(id)arg2 isVideoCall:(char)arg3 ;
-(id)peopleSearchDataSourceAudioCallButtonImage;
-(char)peopleSearchDataSourceIsAudioCallingAvailableForContact:(id)arg1 ;
-(id)peopleSearchDataSourceVideoCallButtonImage;
-(char)peopleSearchDataSourceIsVideoCallingAvailableForContact:(id)arg1 ;
-(void)_startImageDownloadWithImageDownloader:(id)arg1 imageUrl:(id)arg2 scenePath:(id)arg3 imageDownloaderCompletion:(/*^block*/id)arg4 ;
-(unsigned)dialerMode;
-(void)setDialerMode:(unsigned)arg1 ;
-(void)recentCallerViewModelDidFinishFetching:(id)arg1 ;
-(void)scrollToTopAnimated:(char)arg1 ;
-(void)setDelegate:(id<FBWebRTCCallTabContactsViewControllerDelegate>)arg1 ;
-(void)dealloc;
-(float)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(float)tableView:(id)arg1 heightForHeaderInSection:(int)arg2 ;
-(id)tableView:(id)arg1 viewForHeaderInSection:(int)arg2 ;
-(char)tableView:(id)arg1 shouldHighlightRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(int)numberOfSectionsInTableView:(id)arg1 ;
-(id<FBWebRTCCallTabContactsViewControllerDelegate>)delegate;
-(void)loadView;
-(void)viewWillLayoutSubviews;
-(void)viewWillAppear:(char)arg1 ;
-(void)viewDidAppear:(char)arg1 ;
-(void)viewWillDisappear:(char)arg1 ;
-(void)viewDidDisappear:(char)arg1 ;
-(void)searchBar:(id)arg1 textDidChange:(id)arg2 ;
-(void)searchBarCancelButtonClicked:(id)arg1 ;
-(void)searchDisplayController:(id)arg1 willUnloadSearchResultsTableView:(id)arg2 ;
-(void)searchDisplayControllerDidBeginSearch:(id)arg1 ;
-(void)searchDisplayControllerDidEndSearch:(id)arg1 ;
-(void)searchDisplayController:(id)arg1 didLoadSearchResultsTableView:(id)arg2 ;
@end

