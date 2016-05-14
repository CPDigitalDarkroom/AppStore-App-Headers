/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 14, 2016 at 2:21:53 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/B4BDDC65-4400-4BC5-A974-2245FB5B0846/MessengerCompressed-iphoneos-arm64,iphoneos-armv7.app/MessengerCompressed-iphoneos-arm64,iphoneos-armv7
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>
#import <MessengerCompressed-iphoneos-arm64,iphoneos-armv7/FBPagingViewDelegate.h>
#import <MessengerCompressed-iphoneos-arm64,iphoneos-armv7/FBPagingViewDataSource.h>

@class NSString, FBMMessage, FBUserSession, FBImageDownloader, MNBusinessNavigationHandler, NSArray, UIPageControl, FBPagingView, MNAirlinesBoardingPassCollectionFetcher;

@interface MNAirlinesBoardingPassDetailViewController : UIViewController <FBPagingViewDelegate, FBPagingViewDataSource> {

	NSString* _boardingPassCollectionID;
	FBMMessage* _forwardableMessage;
	FBUserSession* _session;
	FBImageDownloader* _imageDownloader;
	MNBusinessNavigationHandler* _navigationHandler;
	NSArray* _viewModels;
	UIPageControl* _pageControl;
	FBPagingView* _pagingView;
	MNAirlinesBoardingPassCollectionFetcher* _boardingPassCollectionFetcher;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)_fetchBoardingPassCollectionWithCollectionID:(id)arg1 ;
-(void)_updateScrollViewContentOffsetForVisiblePages;
-(void)_handleSuccessfulBoardingPassCollectionFetchWithBoardingPassCollection:(id)arg1 ;
-(void)_handleFailedBoardingPassCollectionFetchWithError:(id)arg1 ;
-(void)_refreshView;
-(char)pagingView:(id)arg1 shouldRecycleView:(id)arg2 ;
-(void)pagingViewDidStartScroll:(id)arg1 nextIndex:(int)arg2 direction:(int)arg3 ;
-(void)pagingViewDidEndScroll:(id)arg1 ;
-(id)pagingView:(id)arg1 viewForPageAtIndex:(unsigned)arg2 ;
-(id)initWithBoardingPassCollectionID:(id)arg1 forwardableMessage:(id)arg2 session:(id)arg3 imageDownloader:(id)arg4 navigationHandler:(id)arg5 ;
-(void)dealloc;
-(void)viewWillLayoutSubviews;
-(void)viewDidLoad;
-(void)_pageControlValueChanged:(id)arg1 ;
-(unsigned)numberOfPagesInPagingView:(id)arg1 ;
@end

