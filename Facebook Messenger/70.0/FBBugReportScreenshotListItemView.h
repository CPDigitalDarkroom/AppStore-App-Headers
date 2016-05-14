/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 14, 2016 at 2:22:46 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/B4BDDC65-4400-4BC5-A974-2245FB5B0846/MessengerCompressed-iphoneos-arm64,iphoneos-armv7.app/MessengerCompressed-iphoneos-arm64,iphoneos-armv7
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MessengerCompressed-iphoneos-arm64,iphoneos-armv7/MessengerCompressed-iphoneos-arm64,iphoneos-armv7-Structs.h>
#import <UIKit/UIView.h>

@class FBBugReportPlayVideoButtonOverlayView, UIButton, FBBugReportRemoveButtonView;

@interface FBBugReportScreenshotListItemView : UIView {

	CGSize _imageSize;
	FBBugReportPlayVideoButtonOverlayView* _playVideoButtonOverlayView;
	UIButton* _screenshotThumbnail;
	FBBugReportRemoveButtonView* _removeButton;
	int _itemType;

}

@property (nonatomic,readonly) UIButton * screenshotThumbnail;                        //@synthesize screenshotThumbnail=_screenshotThumbnail - In the implementation block
@property (nonatomic,retain) FBBugReportRemoveButtonView * removeButton;              //@synthesize removeButton=_removeButton - In the implementation block
@property (assign) int itemType;                                                      //@synthesize itemType=_itemType - In the implementation block
+(float)removeButtonRadius;
-(UIButton *)screenshotThumbnail;
-(void)setRemoveButton:(FBBugReportRemoveButtonView *)arg1 ;
-(int)widthAdjustedToHeight:(int)arg1 ;
-(id)initWithImage:(id)arg1 itemType:(int)arg2 ;
-(void)layoutSubviews;
-(FBBugReportRemoveButtonView *)removeButton;
-(int)itemType;
-(void)setItemType:(int)arg1 ;
@end

