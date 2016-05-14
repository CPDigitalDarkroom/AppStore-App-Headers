/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 14, 2016 at 2:22:43 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/B4BDDC65-4400-4BC5-A974-2245FB5B0846/MessengerCompressed-iphoneos-arm64,iphoneos-armv7.app/MessengerCompressed-iphoneos-arm64,iphoneos-armv7
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MessengerCompressed-iphoneos-arm64,iphoneos-armv7/FBPagingControllerDataSource.h>
#import <MessengerCompressed-iphoneos-arm64,iphoneos-armv7/FBPagingControllerDelegate.h>
#import <MessengerCompressed-iphoneos-arm64,iphoneos-armv7/FBOpenableAttachmentNodeObserver.h>
#import <MessengerCompressed-iphoneos-arm64,iphoneos-armv7/FBModallyPresentableItem.h>
#import <MessengerCompressed-iphoneos-arm64,iphoneos-armv7/FBAnalyticsInfoSource.h>

@protocol FBModalFullscreenControllerDataSource, FBPageableItem, FBModalPresentationLayer, FBModalFullscreenControllerDelegate;
@class NSMutableOrderedSet, FBOpenableAttachmentNode, FBTransparentView, ASDisplayNode, UIView, FBPagingController, NSString, UIViewController;

@interface FBModalFullscreenController : NSObject <FBPagingControllerDataSource, FBPagingControllerDelegate, FBOpenableAttachmentNodeObserver, FBModallyPresentableItem, FBAnalyticsInfoSource> {

	id<FBModalFullscreenControllerDataSource> _dataSource;
	NSMutableOrderedSet* _fullscreenSessionAttachmentNodes;
	FBOpenableAttachmentNode*<FBPageableItem> _initialPagedItem;
	FBTransparentView* _fullscreenView;
	id<FBModalPresentationLayer> _modalLayer;
	ASDisplayNode* _overlayNode;
	char _hideBackground;
	UIView* _fullscreenDimmingView;
	FBPagingController* _pagingController;
	FBOpenableAttachmentNode*<FBPageableItem> _currentlyPagedItem;
	id<FBModalFullscreenControllerDelegate> _delegate;

}

@property (nonatomic,readonly) char inFullscreenSession; 
@property (assign,nonatomic) char hideBackground;                                                         //@synthesize hideBackground=_hideBackground - In the implementation block
@property (assign,nonatomic,__weak) id<FBModalFullscreenControllerDelegate> delegate;                     //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic,__weak) id<FBModalFullscreenControllerDataSource> dataSource;                 //@synthesize dataSource=_dataSource - In the implementation block
@property (getter=isPaging,nonatomic,readonly) char paging; 
@property (nonatomic,readonly) FBOpenableAttachmentNode*<FBPageableItem> initialPagedItem;                //@synthesize initialPagedItem=_initialPagedItem - In the implementation block
@property (nonatomic,readonly) FBOpenableAttachmentNode*<FBPageableItem> currentlyPagedItem;              //@synthesize currentlyPagedItem=_currentlyPagedItem - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) UIView * modalPresentationView; 
@property (nonatomic,readonly) UIViewController * modalPresentationViewController; 
-(id)analyticsModule;
-(id)analyticsExtras;
-(id)existingModalLayerForAttachmentNode:(id)arg1 ;
-(void)attachmentNodeDidUnlift:(id)arg1 ;
-(void)attachmentNodeWillOpen:(id)arg1 animated:(char)arg2 ;
-(void)attachmentNodeMayClose:(id)arg1 ;
-(char)isPaging;
-(FBOpenableAttachmentNode*<FBPageableItem>)currentlyPagedItem;
-(char)shouldAutoRotate;
-(UIView *)modalPresentationView;
-(void)_fadeOutBackground;
-(void)_fadeInBackground;
-(void)_ditchOverlayNode:(id)arg1 ;
-(void)_prepareOverlayNode:(id)arg1 ;
-(void)_setOverlayNode:(id)arg1 ;
-(void)setHideBackground:(char)arg1 ;
-(void)_beginPagingAlongAxis:(unsigned)arg1 initialPage:(id)arg2 ;
-(void)_endPaging;
-(char)inFullscreenSession;
-(id)pagingController:(id)arg1 nodeBeforeNode:(id)arg2 ;
-(id)pagingController:(id)arg1 nodeAfterNode:(id)arg2 ;
-(void)pagingController:(id)arg1 didAddNodeToPagingRange:(id)arg2 ;
-(void)pagingController:(id)arg1 didRemoveNodeFromPagingRange:(id)arg2 ;
-(void)pagingController:(id)arg1 willMoveToNode:(id)arg2 ;
-(void)pagingController:(id)arg1 didMoveToNode:(id)arg2 ;
-(void)pagingControllerWillBeginPaging:(id)arg1 ;
-(void)pagingControllerDidBeginPaging:(id)arg1 ;
-(void)pagingControllerWillEndPaging:(id)arg1 ;
-(void)pagingControllerDidEndPaging:(id)arg1 ;
-(char)hideBackground;
-(FBOpenableAttachmentNode*<FBPageableItem>)initialPagedItem;
-(void)setDataSource:(id<FBModalFullscreenControllerDataSource>)arg1 ;
-(void)setDelegate:(id<FBModalFullscreenControllerDelegate>)arg1 ;
-(id)init;
-(id<FBModalFullscreenControllerDataSource>)dataSource;
-(id<FBModalFullscreenControllerDelegate>)delegate;
@end

