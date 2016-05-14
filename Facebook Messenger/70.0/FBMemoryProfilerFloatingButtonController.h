/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 14, 2016 at 2:23:06 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/B4BDDC65-4400-4BC5-A974-2245FB5B0846/MessengerCompressed-iphoneos-arm64,iphoneos-armv7.app/MessengerCompressed-iphoneos-arm64,iphoneos-armv7
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>
#import <MessengerCompressed-iphoneos-arm64,iphoneos-armv7/FBMemoryProfilerMovableViewController.h>

@protocol FBMemoryProfilerPresentationModeDelegate;
@class UIButton, NSTimer, NSByteCountFormatter, NSString;

@interface FBMemoryProfilerFloatingButtonController : UIViewController <FBMemoryProfilerMovableViewController> {

	UIButton* _floatingButton;
	NSTimer* _timer;
	NSByteCountFormatter* _formatter;
	id<FBMemoryProfilerPresentationModeDelegate> _presentationModeDelegate;

}

@property (assign,nonatomic,__weak) id<FBMemoryProfilerPresentationModeDelegate> presentationModeDelegate;              //@synthesize presentationModeDelegate=_presentationModeDelegate - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)buttonTapped;
-(id<FBMemoryProfilerPresentationModeDelegate>)presentationModeDelegate;
-(void)containerWillMove:(id)arg1 ;
-(char)shouldStretchInMovableContainer;
-(float)minimumHeightInMovableContainer;
-(void)setPresentationModeDelegate:(id<FBMemoryProfilerPresentationModeDelegate>)arg1 ;
-(id)init;
-(void)loadView;
-(void)_update;
-(void)viewDidLoad;
-(void)viewDidAppear:(char)arg1 ;
-(void)viewDidDisappear:(char)arg1 ;
@end

