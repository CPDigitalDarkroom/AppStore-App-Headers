/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 14, 2016 at 9:31:40 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/8A9DE0F0-8C0D-4043-A8B5-545C839396E1/Twitter.app/Twitter
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Twitter/TFNTwitterMomentContainer.h>
#import <Twitter/TFSModel.h>
#import <TFNUI/TFNPlistSerialization.h>

@class TFNTwitterMoment, NSArray, TFNTwitterMomentPage, NSString;

@interface TFNTwitterMomentCapsule : NSObject <TFNTwitterMomentContainer, TFSModel, TFNPlistSerialization> {

	TFNTwitterMoment* _moment;
	NSArray* _pages;
	TFNTwitterMomentPage* _coverPage;

}

@property (nonatomic,readonly) TFNTwitterMoment * moment;                     //@synthesize moment=_moment - In the implementation block
@property (nonatomic,readonly) NSArray * pages;                               //@synthesize pages=_pages - In the implementation block
@property (nonatomic,readonly) TFNTwitterMomentPage * coverPage;              //@synthesize coverPage=_coverPage - In the implementation block
@property (nonatomic,readonly) NSArray * allCarouselPages; 
@property (nonatomic,readonly) char needsPageHydration; 
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)hydrateMomentCapsule:(id)arg1 withStatuses:(id)arg2 ;
+(id)momentCapsuleWithJSONData:(id)arg1 error:(out id*)arg2 ;
-(id)initWithJSONDictionary:(id)arg1 ;
-(TFNTwitterMomentPage *)coverPage;
-(id)plistDictionaryValue;
-(id)initWithMoment:(id)arg1 pages:(id)arg2 coverPage:(id)arg3 ;
-(id)allStatuses;
-(id)pagesForAccount:(id)arg1 ;
-(id)initWithPlistDictionary:(id)arg1 ;
-(id)capsuleByReplacingStatuses:(id)arg1 ;
-(void)updateMoment:(id)arg1 ;
-(char)needsPageHydration;
-(char)isVisibleByAccount:(id)arg1 ;
-(NSArray *)allCarouselPages;
-(TFNTwitterMoment *)moment;
-(id)init;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(NSString *)description;
-(NSArray *)pages;
@end

