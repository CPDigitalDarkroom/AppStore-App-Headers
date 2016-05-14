/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 14, 2016 at 2:22:58 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/B4BDDC65-4400-4BC5-A974-2245FB5B0846/MessengerCompressed-iphoneos-arm64,iphoneos-armv7.app/MessengerCompressed-iphoneos-arm64,iphoneos-armv7
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MessengerCompressed-iphoneos-arm64,iphoneos-armv7/MessengerCompressed-iphoneos-arm64,iphoneos-armv7-Structs.h>
#import <UIKit/UIScrollView.h>
#import <MessengerCompressed-iphoneos-arm64,iphoneos-armv7/FBZoomingPhotoViewDelegate.h>

@protocol FBZoomingPhotoViewDelegate;
@class UIView, NSString;

@interface FBZoomingPhotoView : UIScrollView <FBZoomingPhotoViewDelegate> {

	char _needsSetZoomScale;
	id<FBZoomingPhotoViewDelegate> _forwarder;
	CGPoint _oldCenter;
	float _oldScale;
	CGSize _originalPhotoSize;
	char _zoomEnabled;
	char _managePhotoViewLayout;
	UIView* _photoView;
	float _defaultZoomScale;
	int _zoomContentMode;

}

@property (assign,nonatomic) float defaultZoomScale;                                      //@synthesize defaultZoomScale=_defaultZoomScale - In the implementation block
@property (nonatomic,retain) UIView * photoView;                                          //@synthesize photoView=_photoView - In the implementation block
@property (assign,nonatomic) int zoomContentMode;                                         //@synthesize zoomContentMode=_zoomContentMode - In the implementation block
@property (getter=isZoomed,nonatomic,readonly) char zoomed; 
@property (assign,nonatomic) char zoomEnabled;                                            //@synthesize zoomEnabled=_zoomEnabled - In the implementation block
@property (assign,nonatomic) char managePhotoViewLayout;                                  //@synthesize managePhotoViewLayout=_managePhotoViewLayout - In the implementation block
@property (assign,nonatomic,__weak) id<FBZoomingPhotoViewDelegate> delegate; 
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)resetZoomDefaultAnimated:(char)arg1 ;
-(char)zoomEnabled;
-(void)resetPhotoViewSize:(CGSize)arg1 withContentMode:(int)arg2 ;
-(void)rememberZooming;
-(void)setZoomContentMode:(int)arg1 ;
-(void)setDefaultZoomScales;
-(void)restoreZooming;
-(char)managePhotoViewLayout;
-(void)setManagePhotoViewLayout:(char)arg1 ;
-(void)movePhotoToCenterAnimated:(char)arg1 ;
-(CGPoint)maximumContentOffset;
-(CGPoint)minimumContentOffset;
-(void)setDefaultZoomScale:(float)arg1 ;
-(void)setDefaultZoomScalesWithPhotoViewSize:(CGSize)arg1 ;
-(int)zoomContentMode;
-(UIView *)photoView;
-(void)setPhotoView:(UIView *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setDelegate:(id<FBZoomingPhotoViewDelegate>)arg1 ;
-(void)dealloc;
-(void)layoutSubviews;
-(void)scrollViewDidZoom:(id)arg1 ;
-(id)viewForZoomingInScrollView:(id)arg1 ;
-(void)scrollViewWillBeginZooming:(id)arg1 withView:(id)arg2 ;
-(void)scrollViewDidEndZooming:(id)arg1 withView:(id)arg2 atScale:(float)arg3 ;
-(id<FBZoomingPhotoViewDelegate>)delegate;
-(void)scrollRectToVisible:(CGRect)arg1 animated:(char)arg2 ;
-(void)setZoomEnabled:(char)arg1 ;
-(char)isZoomed;
-(float)defaultZoomScale;
@end

