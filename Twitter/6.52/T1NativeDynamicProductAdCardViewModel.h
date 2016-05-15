/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 14, 2016 at 9:31:28 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/8A9DE0F0-8C0D-4043-A8B5-545C839396E1/Twitter.app/Twitter
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Twitter/TFNTwitterCardContextModel.h>

@class NSString, NSURL, TFNTwitterCardContext, TFNTwitterCardImageSpec, TFNTwitterCardData;

@interface T1NativeDynamicProductAdCardViewModel : NSObject <TFNTwitterCardContextModel> {

	NSString* _displayText;
	NSString* _price;
	NSString* _currency;
	NSString* _domainUrl;
	NSURL* _productUrl;
	TFNTwitterCardContext* _cardContext;
	TFNTwitterCardImageSpec* _mainImageSpec;
	TFNTwitterCardImageSpec* _secondImageSpec;
	TFNTwitterCardImageSpec* _originalImageSpec;
	TFNTwitterCardData* _cardData;
	int _displayMode;

}

@property (nonatomic,retain) TFNTwitterCardContext * cardContext;                      //@synthesize cardContext=_cardContext - In the implementation block
@property (nonatomic,retain) TFNTwitterCardImageSpec * mainImageSpec;                  //@synthesize mainImageSpec=_mainImageSpec - In the implementation block
@property (nonatomic,retain) TFNTwitterCardImageSpec * secondImageSpec;                //@synthesize secondImageSpec=_secondImageSpec - In the implementation block
@property (nonatomic,retain) TFNTwitterCardImageSpec * originalImageSpec;              //@synthesize originalImageSpec=_originalImageSpec - In the implementation block
@property (nonatomic,retain) TFNTwitterCardData * cardData;                            //@synthesize cardData=_cardData - In the implementation block
@property (assign,nonatomic) int displayMode;                                          //@synthesize displayMode=_displayMode - In the implementation block
@property (nonatomic,readonly) NSString * displayText;                                 //@synthesize displayText=_displayText - In the implementation block
@property (nonatomic,readonly) NSString * price;                                       //@synthesize price=_price - In the implementation block
@property (nonatomic,readonly) NSString * currency;                                    //@synthesize currency=_currency - In the implementation block
@property (nonatomic,readonly) NSString * domainUrl;                                   //@synthesize domainUrl=_domainUrl - In the implementation block
@property (nonatomic,readonly) NSURL * productUrl;                                     //@synthesize productUrl=_productUrl - In the implementation block
@property (nonatomic,readonly) NSString * mainImageURL; 
@property (nonatomic,readonly) NSString * secondImageURL; 
@property (nonatomic,readonly) NSString * originalImageURL; 
@property (nonatomic,readonly) unsigned dynamicAdType; 
@property (nonatomic,readonly) char isOriginalImageInZuckRatio; 
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(TFNTwitterCardData *)cardData;
-(id)initWithCardContext:(id)arg1 ;
-(NSURL *)productUrl;
-(TFNTwitterCardContext *)cardContext;
-(id)imageSpec;
-(void)setCardContext:(TFNTwitterCardContext *)arg1 ;
-(void)_userDidUpdate:(id)arg1 ;
-(unsigned)dynamicAdType;
-(NSString *)domainUrl;
-(void)setCardData:(TFNTwitterCardData *)arg1 ;
-(id)priceStringFromMicroMoney:(id)arg1 withCurrency:(id)arg2 ;
-(char)isOriginalImageInZuckRatio;
-(NSString *)mainImageURL;
-(NSString *)secondImageURL;
-(NSString *)originalImageURL;
-(TFNTwitterCardImageSpec *)mainImageSpec;
-(void)setMainImageSpec:(TFNTwitterCardImageSpec *)arg1 ;
-(TFNTwitterCardImageSpec *)secondImageSpec;
-(void)setSecondImageSpec:(TFNTwitterCardImageSpec *)arg1 ;
-(TFNTwitterCardImageSpec *)originalImageSpec;
-(void)setOriginalImageSpec:(TFNTwitterCardImageSpec *)arg1 ;
-(NSString *)displayText;
-(void)setDisplayMode:(int)arg1 ;
-(int)displayMode;
-(NSString *)currency;
-(NSString *)price;
@end

