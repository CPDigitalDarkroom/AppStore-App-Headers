/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 14, 2016 at 2:21:47 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/B4BDDC65-4400-4BC5-A974-2245FB5B0846/MessengerCompressed-iphoneos-arm64,iphoneos-armv7.app/MessengerCompressed-iphoneos-arm64,iphoneos-armv7
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MessengerCompressed-iphoneos-arm64,iphoneos-armv7/MessengerCompressed-iphoneos-arm64,iphoneos-armv7-Structs.h>
#import <UIKit/UIViewController.h>
#import <MessengerCompressed-iphoneos-arm64,iphoneos-armv7/MNMessageVideoAttachmentGetterListener.h>
#import <MessengerCompressed-iphoneos-arm64,iphoneos-armv7/MNVideoControllerDelegate.h>

@protocol MNMessageVideoAttachmentGetterListener, MNVideoPreviewViewControllerDelegate;
@class MNVideoPreviewingData, MNVideoController, MNVideoAttachmentGetterCoordinator, NSArray, MNVideoPreviewView, NSString;

@interface MNVideoPreviewViewController : UIViewController <MNMessageVideoAttachmentGetterListener, MNVideoControllerDelegate> {

	MNVideoPreviewingData* _videoPreviewingData;
	float _previewWidth;
	MNVideoController* _videoController;
	MNVideoAttachmentGetterCoordinator* _videoAttachmentGetterCoordinator;
	NSArray* _previewActionItems;
	MNVideoPreviewView* _videoPreviewView;
	id<MNMessageVideoAttachmentGetterListener> _videoAttachmentGetterListener;
	id<MNVideoPreviewViewControllerDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<MNVideoPreviewViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)messageVideoAttachmentRetrievedForMessageKey:(id)arg1 withURL:(id)arg2 ;
-(void)messageVideoAttachmentFailedRetrieveForMessageKey:(id)arg1 ;
-(void)messageVideoAttachmentRetrievedForMessageKey:(id)arg1 withProgress:(float)arg2 ;
-(void)_requestVideo;
-(void)videoController:(id)arg1 didCreateNewPlayerItemWithPlayer:(id)arg2 ;
-(void)videoController:(id)arg1 disassociatePlayer:(id)arg2 ;
-(void)videoController:(id)arg1 player:(id)arg2 withItem:(id)arg3 didChangeRateFrom:(float)arg4 to:(float)arg5 isAtEndOfVideo:(char)arg6 ;
-(void)videoController:(id)arg1 didChangeState:(int)arg2 ;
-(void)setPreviewWidth:(float)arg1 ;
-(id)initWithVideoPreviewingData:(id)arg1 videoAttachmentGetterCoordinator:(id)arg2 clientProxy:(id)arg3 ;
-(void)openVideoViewNode;
-(void)_initPreviewActionItems;
-(void)_saveVideo;
-(void)_forwardVideo;
-(void)setDelegate:(id<MNVideoPreviewViewControllerDelegate>)arg1 ;
-(id<MNVideoPreviewViewControllerDelegate>)delegate;
-(char)shouldAutorotate;
-(void)loadView;
-(CGSize)preferredContentSize;
-(void)viewDidLoad;
-(void)viewWillDisappear:(char)arg1 ;
-(id)previewActionItems;
@end

