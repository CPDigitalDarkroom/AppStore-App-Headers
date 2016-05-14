/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 14, 2016 at 2:22:15 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/B4BDDC65-4400-4BC5-A974-2245FB5B0846/MessengerCompressed-iphoneos-arm64,iphoneos-armv7.app/MessengerCompressed-iphoneos-arm64,iphoneos-armv7
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIView.h>

@protocol FBStickerResourceManager, FBMStickerViewDelegate;
@class FBStickerImageView, UIImage, FBStickerImagesDownloader, UIColor, FBMSticker, UIActivityIndicatorView;

@interface FBMStickerView : UIView {

	id<FBStickerResourceManager> _stickerResourceManager;
	FBStickerImageView* _stickerImageView;
	unsigned _state;
	char _isStickerImageLoaded;
	UIImage* _originalStickerImage;
	FBStickerImagesDownloader* _imagesDownloader;
	UIColor* _stickerTintColor;
	char _showPlaceholderWhileLoading;
	char _showLoadingIndicator;
	id<FBMStickerViewDelegate> _delegate;
	FBMSticker* _sticker;
	unsigned _layoutIdiom;
	UIActivityIndicatorView* _loadingIndicator;

}

@property (nonatomic,retain) FBMSticker * sticker;                                    //@synthesize sticker=_sticker - In the implementation block
@property (nonatomic,retain) UIActivityIndicatorView * loadingIndicator;              //@synthesize loadingIndicator=_loadingIndicator - In the implementation block
@property (assign,nonatomic,__weak) id<FBMStickerViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) unsigned layoutIdiom;                                    //@synthesize layoutIdiom=_layoutIdiom - In the implementation block
@property (assign,nonatomic) char showPlaceholderWhileLoading;                        //@synthesize showPlaceholderWhileLoading=_showPlaceholderWhileLoading - In the implementation block
@property (assign,nonatomic) char showLoadingIndicator;                               //@synthesize showLoadingIndicator=_showLoadingIndicator - In the implementation block
@property (nonatomic,retain) UIColor * stickerTintColor;                              //@synthesize stickerTintColor=_stickerTintColor - In the implementation block
-(FBMSticker *)sticker;
-(void)setStickerTintColor:(UIColor *)arg1 ;
-(void)setSticker:(FBMSticker *)arg1 ;
-(void)setShowLoadingIndicator:(char)arg1 ;
-(void)stopAllAnimations;
-(id)initWithStickerResourceManager:(id)arg1 ;
-(void)configureWithSticker:(id)arg1 ;
-(UIColor *)stickerTintColor;
-(void)setShowPlaceholderWhileLoading:(char)arg1 ;
-(void)configureWithSticker:(id)arg1 callbackQueue:(id)arg2 successBlock:(/*^block*/id)arg3 ;
-(id)getCurrentStickerImage;
-(void)setLayoutIdiom:(unsigned)arg1 ;
-(unsigned)layoutIdiom;
-(void)configureWithSticker:(id)arg1 originalImageSizeEnabled:(char)arg2 callbackQueue:(id)arg3 successBlock:(/*^block*/id)arg4 ;
-(void)startAnimationIfNeeded;
-(void)_didFetchCachedImage:(id)arg1 stickerFbId:(unsigned long long)arg2 originalImageSizeEnabled:(char)arg3 callbackQueue:(id)arg4 successBlock:(/*^block*/id)arg5 ;
-(void)_didLoadStickerImage:(id)arg1 withStickerFbId:(unsigned long long)arg2 loadedAsynchronously:(char)arg3 callbackQueue:(id)arg4 successBlock:(/*^block*/id)arg5 ;
-(void)_setStickerImage:(id)arg1 animated:(char)arg2 ;
-(void)_downloadStickerImagesInCallbackQueue:(id)arg1 successBlock:(/*^block*/id)arg2 originalImageSizeEnabled:(char)arg3 ;
-(void)_showLoading;
-(void)_hideLoading;
-(char)_hasAnimationImages;
-(void)_loadAnimationIfNeeded:(/*^block*/id)arg1 ;
-(void)resumeLoadingAnimationIfNeeded;
-(char)showPlaceholderWhileLoading;
-(char)showLoadingIndicator;
-(void)_startAnimation;
-(void)setDelegate:(id<FBMStickerViewDelegate>)arg1 ;
-(void)setAlpha:(float)arg1 ;
-(void)layoutSubviews;
-(id<FBMStickerViewDelegate>)delegate;
-(void)startAnimation:(char)arg1 ;
-(void)stopAnimation;
-(void)setLoadingIndicator:(UIActivityIndicatorView *)arg1 ;
-(UIActivityIndicatorView *)loadingIndicator;
@end

