/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 14, 2016 at 9:31:29 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/8A9DE0F0-8C0D-4043-A8B5-545C839396E1/Twitter.app/Twitter
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Twitter/Twitter-Structs.h>
#import <Twitter/T1PlayerCardViewModel.h>
#import <Twitter/TFNTwitterCardContextModel.h>

@class NSString, TFNTwitterCardContext, TFNTwitterCardDataPlayerStreamModel, UIImage, TIPImageFetchOperation, TFNTwitterUser, T1NativeCardClassicCallToActionModel, TFNTwitterMediaImagePipeline;

@interface T1NativePlayerCardViewModel : NSObject <T1PlayerCardViewModel, TFNTwitterCardContextModel> {

	char _isVine;
	char _isAmplify;
	char _canPlayStreamInline;
	char _hasPrimaryUser;
	char _hasDescriptionText;
	char _isAudio;
	NSString* _streamURL;
	TFNTwitterCardContext* _cardContext;
	NSString* _cardURL;
	NSString* _cardName;
	NSString* _titleText;
	NSString* _descriptionText;
	NSString* _callToActionText;
	NSString* _htmlURL;
	NSString* _streamContentType;
	NSString* _callToActionEventType;
	NSString* _userFullName;
	TFNTwitterCardDataPlayerStreamModel* _streamModel;
	UIImage* _playerImage;
	UIImage* _userAvatarImage;
	TIPImageFetchOperation* _playerImageFetchOperation;
	TFNTwitterUser* _primaryUser;
	NSString* _playerImageURL;
	T1NativeCardClassicCallToActionModel* _callToActionModel;
	TFNTwitterMediaImagePipeline* _imagePipeline;
	CGSize _playerImageSize;
	CGSize _streamSize;

}

@property (nonatomic,copy) NSString * cardURL;                                                      //@synthesize cardURL=_cardURL - In the implementation block
@property (nonatomic,copy) NSString * cardName;                                                     //@synthesize cardName=_cardName - In the implementation block
@property (nonatomic,copy) NSString * userFullName;                                                 //@synthesize userFullName=_userFullName - In the implementation block
@property (nonatomic,copy) NSString * titleText;                                                    //@synthesize titleText=_titleText - In the implementation block
@property (nonatomic,copy) NSString * descriptionText;                                              //@synthesize descriptionText=_descriptionText - In the implementation block
@property (nonatomic,copy) NSString * callToActionText;                                             //@synthesize callToActionText=_callToActionText - In the implementation block
@property (assign,nonatomic) char isAmplify;                                                        //@synthesize isAmplify=_isAmplify - In the implementation block
@property (nonatomic,copy) NSString * htmlURL;                                                      //@synthesize htmlURL=_htmlURL - In the implementation block
@property (nonatomic,retain) TFNTwitterCardDataPlayerStreamModel * streamModel;                     //@synthesize streamModel=_streamModel - In the implementation block
@property (nonatomic,retain) UIImage * playerImage;                                                 //@synthesize playerImage=_playerImage - In the implementation block
@property (nonatomic,retain) UIImage * userAvatarImage;                                             //@synthesize userAvatarImage=_userAvatarImage - In the implementation block
@property (nonatomic,retain) TIPImageFetchOperation * playerImageFetchOperation;                    //@synthesize playerImageFetchOperation=_playerImageFetchOperation - In the implementation block
@property (nonatomic,retain) TFNTwitterUser * primaryUser;                                          //@synthesize primaryUser=_primaryUser - In the implementation block
@property (nonatomic,copy) NSString * playerImageURL;                                               //@synthesize playerImageURL=_playerImageURL - In the implementation block
@property (nonatomic,retain) T1NativeCardClassicCallToActionModel * callToActionModel;              //@synthesize callToActionModel=_callToActionModel - In the implementation block
@property (nonatomic,retain) TFNTwitterMediaImagePipeline * imagePipeline;                          //@synthesize imagePipeline=_imagePipeline - In the implementation block
@property (nonatomic,copy,readonly) NSString * streamContentType;                                   //@synthesize streamContentType=_streamContentType - In the implementation block
@property (nonatomic,readonly) NSString * callToActionEventType;                                    //@synthesize callToActionEventType=_callToActionEventType - In the implementation block
@property (nonatomic,readonly) CGSize playerImageSize;                                              //@synthesize playerImageSize=_playerImageSize - In the implementation block
@property (nonatomic,readonly) CGSize streamSize;                                                   //@synthesize streamSize=_streamSize - In the implementation block
@property (nonatomic,readonly) char hasPrimaryUser;                                                 //@synthesize hasPrimaryUser=_hasPrimaryUser - In the implementation block
@property (nonatomic,readonly) char hasDescriptionText;                                             //@synthesize hasDescriptionText=_hasDescriptionText - In the implementation block
@property (nonatomic,readonly) char isAudio;                                                        //@synthesize isAudio=_isAudio - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy,readonly) NSString * streamURL;                                           //@synthesize streamURL=_streamURL - In the implementation block
@property (nonatomic,readonly) char isVine;                                                         //@synthesize isVine=_isVine - In the implementation block
@property (nonatomic,readonly) char canPlayStreamInline;                                            //@synthesize canPlayStreamInline=_canPlayStreamInline - In the implementation block
@property (nonatomic,readonly) int playerControllerMode; 
@property (nonatomic,readonly) TFNTwitterCardContext * cardContext;                                 //@synthesize cardContext=_cardContext - In the implementation block
-(char)isVine;
-(void)setImagePipeline:(TFNTwitterMediaImagePipeline *)arg1 ;
-(void)setCallToActionText:(NSString *)arg1 ;
-(id)initWithCardContext:(id)arg1 ;
-(char)canPlayStreamInline;
-(char)isAmplify;
-(int)playerControllerMode;
-(TFNTwitterCardContext *)cardContext;
-(TFNTwitterUser *)primaryUser;
-(void)_primaryUserDidUpdate:(id)arg1 ;
-(void)setPrimaryUser:(TFNTwitterUser *)arg1 ;
-(NSString *)callToActionText;
-(NSString *)callToActionEventType;
-(char)hasPrimaryUser;
-(UIImage *)userAvatarImage;
-(UIImage *)playerImage;
-(NSString *)htmlURL;
-(CGSize)playerImageSize;
-(void)setCardURL:(NSString *)arg1 ;
-(NSString *)playerImageURL;
-(void)setPlayerImage:(UIImage *)arg1 ;
-(void)setPlayerImageFetchOperation:(TIPImageFetchOperation *)arg1 ;
-(void)setIsAmplify:(char)arg1 ;
-(void)setHtmlURL:(NSString *)arg1 ;
-(NSString *)streamContentType;
-(CGSize)streamSize;
-(void)setUserFullName:(NSString *)arg1 ;
-(TFNTwitterCardDataPlayerStreamModel *)streamModel;
-(void)setStreamModel:(TFNTwitterCardDataPlayerStreamModel *)arg1 ;
-(void)setUserAvatarImage:(UIImage *)arg1 ;
-(TIPImageFetchOperation *)playerImageFetchOperation;
-(void)setPlayerImageURL:(NSString *)arg1 ;
-(T1NativeCardClassicCallToActionModel *)callToActionModel;
-(void)setCallToActionModel:(T1NativeCardClassicCallToActionModel *)arg1 ;
-(TFNTwitterMediaImagePipeline *)imagePipeline;
-(NSString *)userFullName;
-(NSString *)cardURL;
-(char)isAudio;
-(void)dealloc;
-(id)init;
-(void)reset;
-(void)setTitleText:(NSString *)arg1 ;
-(NSString *)titleText;
-(char)hasDescriptionText;
-(void)setDescriptionText:(NSString *)arg1 ;
-(NSString *)descriptionText;
-(NSString *)streamURL;
-(NSString *)cardName;
-(void)setCardName:(NSString *)arg1 ;
@end

