/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 14, 2016 at 9:31:19 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/8A9DE0F0-8C0D-4043-A8B5-545C839396E1/Twitter.app/Twitter
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Twitter/T1NativeCardImageModelDelegate.h>
#import <Twitter/TFNTwitterCardContextModel.h>

@class TFNTwitterCardContext, TFNTwitterCommerceProduct, NSString, T1NativeCardImageModel;

@interface T1NativeBuyNowCardViewModel : NSObject <T1NativeCardImageModelDelegate, TFNTwitterCardContextModel> {

	char _isFullBleed;
	char _isWideLayoutSupported;
	int _displayMode;
	TFNTwitterCardContext* _cardContext;
	TFNTwitterCommerceProduct* _product;
	NSString* _computedProductByline;
	T1NativeCardImageModel* _imagesModel;
	unsigned _numberOfImagesToShow;

}

@property (nonatomic,retain) TFNTwitterCardContext * cardContext;               //@synthesize cardContext=_cardContext - In the implementation block
@property (nonatomic,retain) TFNTwitterCommerceProduct * product;               //@synthesize product=_product - In the implementation block
@property (nonatomic,retain) NSString * computedProductByline;                  //@synthesize computedProductByline=_computedProductByline - In the implementation block
@property (nonatomic,retain) T1NativeCardImageModel * imagesModel;              //@synthesize imagesModel=_imagesModel - In the implementation block
@property (assign,nonatomic) unsigned numberOfImagesToShow;                     //@synthesize numberOfImagesToShow=_numberOfImagesToShow - In the implementation block
@property (assign,nonatomic) char isWideLayoutSupported;                        //@synthesize isWideLayoutSupported=_isWideLayoutSupported - In the implementation block
@property (nonatomic,readonly) NSString * productName; 
@property (nonatomic,readonly) NSString * productByline; 
@property (nonatomic,readonly) NSString * callToActionLabel; 
@property (nonatomic,readonly) NSString * cardBadgeLabel; 
@property (nonatomic,readonly) char isFullBleed;                                //@synthesize isFullBleed=_isFullBleed - In the implementation block
@property (nonatomic,readonly) int displayMode;                                 //@synthesize displayMode=_displayMode - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithCardContext:(id)arg1 ;
-(TFNTwitterCardContext *)cardContext;
-(void)setCardContext:(TFNTwitterCardContext *)arg1 ;
-(NSString *)callToActionLabel;
-(T1NativeCardImageModel *)imagesModel;
-(NSString *)cardBadgeLabel;
-(NSString *)productByline;
-(char)isWideLayoutSupported;
-(id)_createImageSpecs;
-(id)_createProduct;
-(NSString *)computedProductByline;
-(void)setComputedProductByline:(NSString *)arg1 ;
-(unsigned)numberOfImagesToShow;
-(void)imageModelDidUpdate:(id)arg1 ;
-(char)isFullBleed;
-(void)setIsWideLayoutSupported:(char)arg1 ;
-(void)setImagesModel:(T1NativeCardImageModel *)arg1 ;
-(void)setNumberOfImagesToShow:(unsigned)arg1 ;
-(void)setProduct:(TFNTwitterCommerceProduct *)arg1 ;
-(TFNTwitterCommerceProduct *)product;
-(id)init;
-(int)displayMode;
-(NSString *)productName;
@end

