/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 14, 2016 at 2:21:42 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/B4BDDC65-4400-4BC5-A974-2245FB5B0846/MessengerCompressed-iphoneos-arm64,iphoneos-armv7.app/MessengerCompressed-iphoneos-arm64,iphoneos-armv7
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MessengerCompressed-iphoneos-arm64,iphoneos-armv7/FBContainerViewController.h>
#import <MessengerCompressed-iphoneos-arm64,iphoneos-armv7/MNInboxPendingRequestsViewControllerDelegate.h>
#import <MessengerCompressed-iphoneos-arm64,iphoneos-armv7/FBClassProvidable.h>

@protocol FBProvider, MNInboxTopBarViewControllerDelegate;
@class MNInboxTopBarView, MNInboxPendingRequestsViewController, NSString;

@interface MNInboxTopBarViewController : FBContainerViewController <MNInboxPendingRequestsViewControllerDelegate, FBClassProvidable> {

	MNInboxTopBarView* _topBarView;
	MNInboxPendingRequestsViewController* _pendingRequestViewController;
	id<FBProvider> _pendingRequestViewControllerProvider;
	id<MNInboxTopBarViewControllerDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<MNInboxTopBarViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithProviderMapData:(id)arg1 ;
-(void)pendingRequestsViewControllerDidTap:(id)arg1 ;
-(void)pendingRequestsViewControllerDidChangeHeight:(id)arg1 ;
-(float)contentHeight;
-(void)setDelegate:(id<MNInboxTopBarViewControllerDelegate>)arg1 ;
-(id<MNInboxTopBarViewControllerDelegate>)delegate;
-(void)loadView;
@end

