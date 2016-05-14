/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 14, 2016 at 2:22:46 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/B4BDDC65-4400-4BC5-A974-2245FB5B0846/MessengerCompressed-iphoneos-arm64,iphoneos-armv7.app/MessengerCompressed-iphoneos-arm64,iphoneos-armv7
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIScrollView.h>

@protocol FBBugReportScreenshotListViewDelegate;
@class FBBugReportAddScreenshotView, NSMutableArray;

@interface FBBugReportScreenshotListView : UIScrollView {

	FBBugReportAddScreenshotView* _addScreenshotView;
	char _screenshotJustAdded;
	NSMutableArray* _screenshotViews;
	id<FBBugReportScreenshotListViewDelegate> _screenshotListDelegate;

}

@property (nonatomic,retain) NSMutableArray * screenshotViews;                                                     //@synthesize screenshotViews=_screenshotViews - In the implementation block
@property (assign,nonatomic,__weak) id<FBBugReportScreenshotListViewDelegate> screenshotListDelegate;              //@synthesize screenshotListDelegate=_screenshotListDelegate - In the implementation block
-(id<FBBugReportScreenshotListViewDelegate>)screenshotListDelegate;
-(void)setScreenshotListDelegate:(id<FBBugReportScreenshotListViewDelegate>)arg1 ;
-(id)addThumbnail:(id)arg1 itemType:(int)arg2 ;
-(unsigned)maximumNumberOfScreenshots;
-(void)removeScreenshotAtIndex:(int)arg1 ;
-(void)setScreenshotViews:(NSMutableArray *)arg1 ;
-(void)addScreenshotPressed;
-(NSMutableArray *)screenshotViews;
-(void)adjustLayout;
-(void)removeScreenshot:(id)arg1 ;
-(id)init;
-(void)layoutSubviews;
@end

