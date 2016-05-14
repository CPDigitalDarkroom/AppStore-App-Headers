/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 14, 2016 at 2:22:04 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/B4BDDC65-4400-4BC5-A974-2245FB5B0846/MessengerCompressed-iphoneos-arm64,iphoneos-armv7.app/MessengerCompressed-iphoneos-arm64,iphoneos-armv7
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MessengerCompressed-iphoneos-arm64,iphoneos-armv7/MessengerCompressed-iphoneos-arm64,iphoneos-armv7-Structs.h>
#import <UIKit/UIView.h>
#import <UIKit/UIScrollViewDelegate.h>

@protocol FBBrowserSurface, FBBrowserChromeDelegate;
@class UIView, UIScrollView, FBContentInsetTracker, FBBrowserHeaderView, FBBrowserFooterView, FBBrowserShareQuoteView, FBBrowserLayoutConfig, NSString, UIButton;

@interface FBBrowserLayoutView : UIView <UIScrollViewDelegate> {

	UIView* _webView;
	UIScrollView* _scrollView;
	FBContentInsetTracker* _webViewContentInsetTracker;
	FBBrowserHeaderView* _headerView;
	FBBrowserFooterView* _footerView;
	FBBrowserShareQuoteView* _shareQuoteView;
	id<FBBrowserSurface> _browserSurface;
	FBBrowserLayoutConfig* _layoutConfig;
	float _chromeState;
	CGPoint _previousScrollViewContentOffset;
	char _shouldPanChrome;
	char _hideBrowserSurface;
	char _hasBackNavigationAction;
	char _hasForwardNavigationAction;
	char _isBeingPreviewed;
	char _isSaved;
	char _loading;
	unsigned _pulseShareCount;
	float _progress;
	NSString* _shareQuoteText;
	id<FBBrowserChromeDelegate> _delegate;

}

@property (assign,nonatomic) char hasBackNavigationAction;                             //@synthesize hasBackNavigationAction=_hasBackNavigationAction - In the implementation block
@property (assign,nonatomic) char hasForwardNavigationAction;                          //@synthesize hasForwardNavigationAction=_hasForwardNavigationAction - In the implementation block
@property (assign,nonatomic) char isBeingPreviewed;                                    //@synthesize isBeingPreviewed=_isBeingPreviewed - In the implementation block
@property (assign,nonatomic) unsigned pulseShareCount;                                 //@synthesize pulseShareCount=_pulseShareCount - In the implementation block
@property (assign,nonatomic) char isSaved;                                             //@synthesize isSaved=_isSaved - In the implementation block
@property (assign,nonatomic) char loading;                                             //@synthesize loading=_loading - In the implementation block
@property (assign,nonatomic) float progress;                                           //@synthesize progress=_progress - In the implementation block
@property (nonatomic,copy) NSString * shareQuoteText;                                  //@synthesize shareQuoteText=_shareQuoteText - In the implementation block
@property (assign,nonatomic,__weak) id<FBBrowserChromeDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) UIButton * saveButtonForNux; 
@property (nonatomic,readonly) UIButton * moreButtonForNux; 
@property (nonatomic,readonly) UIView * footerViewForNux; 
@property (nonatomic,readonly) char prefersStatusBarHidden; 
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setIsBeingPreviewed:(char)arg1 ;
-(void)setHasBackNavigationAction:(char)arg1 ;
-(void)setHasForwardNavigationAction:(char)arg1 ;
-(void)updateURL:(id)arg1 ;
-(void)updateIsPrefetched:(char)arg1 ;
-(char)hasBackNavigationAction;
-(char)hasForwardNavigationAction;
-(void)setPulseShareCount:(unsigned)arg1 ;
-(void)setIsSaved:(char)arg1 ;
-(UIButton *)saveButtonForNux;
-(UIButton *)moreButtonForNux;
-(char)isBeingPreviewed;
-(unsigned)pulseShareCount;
-(void)_headerViewTapped;
-(void)_statusBarHiddenWillChange:(id)arg1 ;
-(void)_scrollViewDidPan:(id)arg1 ;
-(void)_setChromeState:(float)arg1 ;
-(void)setShareQuoteText:(NSString *)arg1 ;
-(void)expandChromeAnimated;
-(id)initWithWebView:(id)arg1 scrollView:(id)arg2 webViewContentInsetTracker:(id)arg3 browserSurface:(id)arg4 layoutConfig:(id)arg5 ;
-(UIView *)footerViewForNux;
-(void)removeBrowserSurface;
-(NSString *)shareQuoteText;
-(void)setDelegate:(id<FBBrowserChromeDelegate>)arg1 ;
-(void)dealloc;
-(void)layoutSubviews;
-(void)scrollViewWillBeginDragging:(id)arg1 ;
-(void)scrollViewWillEndDragging:(id)arg1 withVelocity:(CGPoint)arg2 targetContentOffset:(inout CGPoint*)arg3 ;
-(char)scrollViewShouldScrollToTop:(id)arg1 ;
-(id<FBBrowserChromeDelegate>)delegate;
-(char)prefersStatusBarHidden;
-(void)setProgress:(float)arg1 ;
-(float)progress;
-(char)isSaved;
-(void)setLoading:(char)arg1 ;
-(char)loading;
@end

