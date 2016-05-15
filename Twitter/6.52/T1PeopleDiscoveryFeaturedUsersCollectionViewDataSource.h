/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 14, 2016 at 9:31:22 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/8A9DE0F0-8C0D-4043-A8B5-545C839396E1/Twitter.app/Twitter
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Twitter/T1PeopleDiscoveryCollectionViewDataSource.h>
#import <Twitter/T1PeopleDiscoveryScribableItem.h>

@protocol TFNPeopleDiscoveryFeaturedUsersPage;
@class UICollectionView, NSString, NSArray, TFNTwitterAccount, TIPImagePipeline;

@interface T1PeopleDiscoveryFeaturedUsersCollectionViewDataSource : NSObject <T1PeopleDiscoveryCollectionViewDataSource, T1PeopleDiscoveryScribableItem> {

	UICollectionView* _collectionView;
	id<TFNPeopleDiscoveryFeaturedUsersPage> _page;
	TFNTwitterAccount* _account;
	TIPImagePipeline* _imagePipeline;

}

@property (nonatomic,readonly) TFNTwitterAccount * account;                               //@synthesize account=_account - In the implementation block
@property (nonatomic,readonly) TIPImagePipeline * imagePipeline;                          //@synthesize imagePipeline=_imagePipeline - In the implementation block
@property (nonatomic,readonly) id<TFNPeopleDiscoveryFeaturedUsersPage> page;              //@synthesize page=_page - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) UICollectionView * collectionView;                    //@synthesize collectionView=_collectionView - In the implementation block
@property (nonatomic,copy,readonly) NSString * backgroundImageURL; 
@property (nonatomic,copy,readonly) NSArray * backingObjects; 
-(NSArray *)backingObjects;
-(id)t1_peopleDiscoveryScribeItemForItemIndex:(unsigned)arg1 ;
-(id)t1_peopleDiscoveryScribeElement;
-(id)initWithAccount:(id)arg1 page:(id)arg2 imagePipeline:(id)arg3 ;
-(TIPImagePipeline *)imagePipeline;
-(id)init;
-(int)collectionView:(id)arg1 numberOfItemsInSection:(int)arg2 ;
-(id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2 ;
-(id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3 ;
-(UICollectionView *)collectionView;
-(void)setCollectionView:(UICollectionView *)arg1 ;
-(id<TFNPeopleDiscoveryFeaturedUsersPage>)page;
-(TFNTwitterAccount *)account;
-(NSString *)backgroundImageURL;
@end

