/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, May 18, 2016 at 11:45:30 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/D2238F36-ED84-40F4-9CB2-8C71CACC8B47/Spotify.app/Spotify
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, UIImage;

@interface SPTBannerItem : NSObject {

	int _style;
	unsigned _priority;
	NSString* _localizedTitle;
	NSString* _localizedMessage;
	NSString* _localizedActionButtonTitle;
	UIImage* _image;
	double _presentationDuration;

}

@property (nonatomic,readonly) int style;                                               //@synthesize style=_style - In the implementation block
@property (nonatomic,readonly) unsigned priority;                                       //@synthesize priority=_priority - In the implementation block
@property (nonatomic,readonly) double presentationDuration;                             //@synthesize presentationDuration=_presentationDuration - In the implementation block
@property (nonatomic,copy,readonly) NSString * localizedTitle;                          //@synthesize localizedTitle=_localizedTitle - In the implementation block
@property (nonatomic,copy,readonly) NSString * localizedMessage;                        //@synthesize localizedMessage=_localizedMessage - In the implementation block
@property (nonatomic,copy,readonly) NSString * localizedActionButtonTitle;              //@synthesize localizedActionButtonTitle=_localizedActionButtonTitle - In the implementation block
@property (nonatomic,copy,readonly) UIImage * image;                                    //@synthesize image=_image - In the implementation block
+(id)spt_account_bannerItemForPaymentStateIssue:(int)arg1 productInformationController:(id)arg2 ;
-(id)initWithLocalizedTitle:(id)arg1 localizedMessage:(id)arg2 localizedActionButtonTitle:(id)arg3 style:(int)arg4 priority:(unsigned)arg5 presentationDuration:(double)arg6 ;
-(id)initWithLocalizedTitle:(id)arg1 localizedMessage:(id)arg2 localizedActionButtonTitle:(id)arg3 image:(id)arg4 style:(int)arg5 priority:(unsigned)arg6 presentationDuration:(double)arg7 ;
-(NSString *)localizedActionButtonTitle;
-(double)presentationDuration;
-(NSString *)localizedMessage;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(UIImage *)image;
-(int)style;
-(unsigned)priority;
-(NSString *)localizedTitle;
@end

