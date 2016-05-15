/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 14, 2016 at 9:31:38 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/8A9DE0F0-8C0D-4043-A8B5-545C839396E1/Twitter.app/Twitter
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Twitter/Twitter-Structs.h>
#import <TFNUI/TFNItemsDataViewController.h>
#import <Twitter/TFNTwitterAuthenticated.h>

@protocol T1CommerceOfferAddedTableControllerDelegate;
@class TFNTwitterAccount, TFNTwitterCommerceOffer, T1OfferTitleDetailsCellDataAdapter, NSString;

@interface T1CommerceOfferAddedTableController : TFNItemsDataViewController <TFNTwitterAuthenticated> {

	TFNTwitterAccount* _account;
	float _cellDetailsLeftAligntment;
	id<T1CommerceOfferAddedTableControllerDelegate> _offerAddedTableDelegate;
	TFNTwitterCommerceOffer* _offer;
	T1OfferTitleDetailsCellDataAdapter* _titleDetailCellAdapter;

}

@property (nonatomic,retain) TFNTwitterCommerceOffer * offer;                                                             //@synthesize offer=_offer - In the implementation block
@property (nonatomic,retain) T1OfferTitleDetailsCellDataAdapter * titleDetailCellAdapter;                                 //@synthesize titleDetailCellAdapter=_titleDetailCellAdapter - In the implementation block
@property (assign,nonatomic) float cellDetailsLeftAligntment;                                                             //@synthesize cellDetailsLeftAligntment=_cellDetailsLeftAligntment - In the implementation block
@property (assign,nonatomic,__weak) id<T1CommerceOfferAddedTableControllerDelegate> offerAddedTableDelegate;              //@synthesize offerAddedTableDelegate=_offerAddedTableDelegate - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) TFNTwitterAccount * account;                                                                 //@synthesize account=_account - In the implementation block
-(void)_updateSections;
-(id)initWithAccount:(id)arg1 forOffer:(id)arg2 ;
-(CGSize)contentSizeForWidth:(float)arg1 ;
-(void)setOfferAddedTableDelegate:(id<T1CommerceOfferAddedTableControllerDelegate>)arg1 ;
-(void)setCellDetailsLeftAligntment:(float)arg1 ;
-(void)setTitleDetailCellAdapter:(T1OfferTitleDetailsCellDataAdapter *)arg1 ;
-(T1OfferTitleDetailsCellDataAdapter *)titleDetailCellAdapter;
-(float)cellDetailsLeftAligntment;
-(id<T1CommerceOfferAddedTableControllerDelegate>)offerAddedTableDelegate;
-(char)shouldSelectItem:(id)arg1 atIndexPath:(id)arg2 ;
-(void)didSelectItem:(id)arg1 atIndexPath:(id)arg2 ;
-(void)dealloc;
-(id)init;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)viewDidLoad;
-(void)setOffer:(TFNTwitterCommerceOffer *)arg1 ;
-(TFNTwitterCommerceOffer *)offer;
-(void)setAccount:(TFNTwitterAccount *)arg1 ;
-(TFNTwitterAccount *)account;
@end

