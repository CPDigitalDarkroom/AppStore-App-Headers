/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 14, 2016 at 2:22:08 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/B4BDDC65-4400-4BC5-A974-2245FB5B0846/MessengerCompressed-iphoneos-arm64,iphoneos-armv7.app/MessengerCompressed-iphoneos-arm64,iphoneos-armv7
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MessengerCompressed-iphoneos-arm64,iphoneos-armv7/MessengerCompressed-iphoneos-arm64,iphoneos-armv7-Structs.h>
#import <UIKit/UIView.h>

@class FBCropContainerView, FBCropBottomBar, FBMediaTopNavigationBar, FBCropOptionsBarView;

@interface FBCropView : UIView {

	FBCropContainerView* _cropContainerView;
	FBCropBottomBar* _cropBottomBar;
	FBMediaTopNavigationBar* _cropTopBar;
	char _cropOptionsBarViewHidden;
	FBCropOptionsBarView* _cropOptionsBarView;
	float _topLayoutGuideLength;
	int _interfaceOrientation;

}

@property (nonatomic,readonly) FBCropContainerView * cropContainerView;              //@synthesize cropContainerView=_cropContainerView - In the implementation block
@property (nonatomic,readonly) FBCropBottomBar * cropBottomBar;                      //@synthesize cropBottomBar=_cropBottomBar - In the implementation block
@property (nonatomic,readonly) FBMediaTopNavigationBar * cropTopBar;                 //@synthesize cropTopBar=_cropTopBar - In the implementation block
@property (nonatomic,retain) FBCropOptionsBarView * cropOptionsBarView;              //@synthesize cropOptionsBarView=_cropOptionsBarView - In the implementation block
@property (assign,nonatomic) float topLayoutGuideLength;                             //@synthesize topLayoutGuideLength=_topLayoutGuideLength - In the implementation block
@property (assign,nonatomic) int interfaceOrientation;                               //@synthesize interfaceOrientation=_interfaceOrientation - In the implementation block
-(void)setTopLayoutGuideLength:(float)arg1 ;
-(float)topLayoutGuideLength;
-(FBMediaTopNavigationBar *)cropTopBar;
-(CGRect)_cropContainerFrameForBounds:(CGRect)arg1 topBarHeight:(float)arg2 bottomBarHeight:(float)arg3 ;
-(CGRect)_cropOptionsBarViewFrame;
-(CGRect)_cropTopBarFrameForBounds:(CGRect)arg1 ;
-(CGRect)_cropBottomBarFrameForBounds:(CGRect)arg1 ;
-(void)setCropOptionsBarView:(FBCropOptionsBarView *)arg1 ;
-(FBCropBottomBar *)cropBottomBar;
-(FBCropOptionsBarView *)cropOptionsBarView;
-(id)initWithFrame:(CGRect)arg1 image:(id)arg2 photoCropInfo:(id)arg3 interfaceOrientation:(int)arg4 userManipulableCropbox:(char)arg5 shouldDrawInnerGrid:(char)arg6 showTopBar:(char)arg7 mediaPickerStyle:(unsigned)arg8 ;
-(FBCropContainerView *)cropContainerView;
-(void)setCropOptionsBarHidden:(char)arg1 animated:(char)arg2 ;
-(void)layoutSubviews;
-(int)interfaceOrientation;
-(void)setInterfaceOrientation:(int)arg1 ;
@end

