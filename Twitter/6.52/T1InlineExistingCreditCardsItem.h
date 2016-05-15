/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 14, 2016 at 9:31:29 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/8A9DE0F0-8C0D-4043-A8B5-545C839396E1/Twitter.app/Twitter
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Twitter/Twitter-Structs.h>
#import <TFNUI/TFNBlockDataViewAdapter.h>

@class TFNTwitterAccount, TFNFormAppearance, NSString;

@interface T1InlineExistingCreditCardsItem : TFNBlockDataViewAdapter {

	char _disclosureIndicator;
	TFNTwitterAccount* _account;
	unsigned _supportedCardTypes;
	TFNFormAppearance* _appearance;
	/*^block*/id _detailTextLeftAlignment;

}

@property (nonatomic,retain) TFNTwitterAccount * account;                 //@synthesize account=_account - In the implementation block
@property (assign,nonatomic) unsigned supportedCardTypes;                 //@synthesize supportedCardTypes=_supportedCardTypes - In the implementation block
@property (nonatomic,retain) TFNFormAppearance * appearance;              //@synthesize appearance=_appearance - In the implementation block
@property (assign,nonatomic) char disclosureIndicator;                    //@synthesize disclosureIndicator=_disclosureIndicator - In the implementation block
@property (nonatomic,readonly) NSString * titleText; 
@property (nonatomic,readonly) NSString * detailText; 
@property (nonatomic,copy) id detailTextLeftAlignment;                    //@synthesize detailTextLeftAlignment=_detailTextLeftAlignment - In the implementation block
-(void)setSupportedCardTypes:(unsigned)arg1 ;
-(unsigned)supportedCardTypes;
-(char)disclosureIndicator;
-(id)detailTextLeftAlignment;
-(void)setDisclosureIndicator:(char)arg1 ;
-(void)setDetailTextLeftAlignment:(id)arg1 ;
-(CGSize)dataViewController:(id)arg1 collectionViewSizeForItem:(id)arg2 constrainedToSize:(CGSize)arg3 withOptions:(id)arg4 atIndexPath:(id)arg5 ;
-(id)dataViewController:(id)arg1 collectionViewCellForItem:(id)arg2 withOptions:(id)arg3 atIndexPath:(id)arg4 ;
-(NSString *)detailText;
-(TFNFormAppearance *)appearance;
-(NSString *)titleText;
-(void)setAccount:(TFNTwitterAccount *)arg1 ;
-(TFNTwitterAccount *)account;
-(void)setAppearance:(TFNFormAppearance *)arg1 ;
@end

