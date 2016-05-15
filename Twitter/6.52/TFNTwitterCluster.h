/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 14, 2016 at 9:31:53 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/8A9DE0F0-8C0D-4043-A8B5-545C839396E1/Twitter.app/Twitter
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSCoding.h>
#import <TFNUI/TFNPlistSerialization.h>

@class NSString, NSArray;

@interface TFNTwitterCluster : NSObject <NSCoding, TFNPlistSerialization> {

	NSString* _clusterID;
	NSString* _title;
	NSString* _subtitle;
	NSArray* _galleries;

}

@property (nonatomic,copy) NSString * clusterID;                    //@synthesize clusterID=_clusterID - In the implementation block
@property (nonatomic,copy) NSString * title;                        //@synthesize title=_title - In the implementation block
@property (nonatomic,copy) NSString * subtitle;                     //@synthesize subtitle=_subtitle - In the implementation block
@property (nonatomic,readonly) char isVirtual; 
@property (nonatomic,retain) NSArray * galleries;                   //@synthesize galleries=_galleries - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)clusterWithJSONDictionary:(id)arg1 ;
+(id)statusWithClusterFromModuleDictionary:(id)arg1 ;
+(id)metadataKeyForClusterClass;
+(id)clusterFromGalleryDictionary:(id)arg1 ;
-(id)initWithJSONDictionary:(id)arg1 ;
-(NSArray *)galleries;
-(NSString *)clusterID;
-(void)setClusterID:(NSString *)arg1 ;
-(id)plistDictionaryValue;
-(id)initWithPlistDictionary:(id)arg1 ;
-(char)deleteStatus:(id)arg1 excludeMediaGalleries:(char)arg2 ;
-(void)addStatusGallery:(id)arg1 ;
-(void)addUserGallery:(id)arg1 ;
-(id)duplicateClusterExcludingGalleries;
-(void)setGalleries:(NSArray *)arg1 ;
-(char)isVirtual;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)init;
-(void)setTitle:(NSString *)arg1 ;
-(NSString *)description;
-(NSString *)title;
-(NSString *)subtitle;
-(void)setSubtitle:(NSString *)arg1 ;
@end

