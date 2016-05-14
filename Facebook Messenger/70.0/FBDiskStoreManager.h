/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 14, 2016 at 2:22:56 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/B4BDDC65-4400-4BC5-A974-2245FB5B0846/MessengerCompressed-iphoneos-arm64,iphoneos-armv7.app/MessengerCompressed-iphoneos-arm64,iphoneos-armv7
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MessengerCompressed-iphoneos-arm64,iphoneos-armv7/MessengerCompressed-iphoneos-arm64,iphoneos-armv7-Structs.h>
#import <MessengerCompressed-iphoneos-arm64,iphoneos-armv7/FBInvalidating.h>

@class NSString;

@interface FBDiskStoreManager : NSObject <FBInvalidating> {

	shared_ptr<facebook::mobile::xplat::compactdisk::StoreManager>* _storeManager;
	unique_ptr<facebook::mobile::xplat::compactdisk::LazySingletonMap<std::__1::basic_string<char>, (anonymous namespace)::ValueWrapper<FBDiskStore *>, FBDiskCacheConfig *>, std::__1::default_delete<facebook::mobile::xplat::compactdisk::LazySingletonMap<std::__1::basic_string<char>, (anonymous namespace)::ValueWrapper<FBDiskStore *>, FBDiskCacheConfig *> > >* _unmanagedMap;
	unique_ptr<facebook::mobile::xplat::compactdisk::LazySingletonMap<std::__1::basic_string<char>, (anonymous namespace)::ValueWrapper<FBPersistentKeyValueStore *>, FBDiskCacheConfig *>, std::__1::default_delete<facebook::mobile::xplat::compactdisk::LazySingletonMap<std::__1::basic_string<char>, (anonymous namespace)::ValueWrapper<FBPersistentKeyValueStore *>, FBDiskCacheConfig *> > >* _pkvsMap;
	unique_ptr<facebook::mobile::xplat::compactdisk::LazySingletonMap<std::__1::basic_string<char>, (anonymous namespace)::ValueWrapper<FBDiskCache *>, FBDiskCacheConfig *>, std::__1::default_delete<facebook::mobile::xplat::compactdisk::LazySingletonMap<std::__1::basic_string<char>, (anonymous namespace)::ValueWrapper<FBDiskCache *>, FBDiskCacheConfig *> > >* _diskCacheMap;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (getter=isValid,nonatomic,readonly) char valid; 
+(char)forceCleanseOnInit;
+(void)setForceCleanseOnInit:(char)arg1 ;
-(id)diskCacheForIdentifier:(unsigned)arg1 ;
-(id)diskStoreForIdentifier:(unsigned)arg1 ;
-(id)diskCacheForName:(id)arg1 ;
-(id)persistentKeyValueStoreForIdentifier:(unsigned)arg1 ;
-(id)persistentKeyValueStoreForName:(id)arg1 ;
-(id)diskStoreForConfig:(id)arg1 ;
-(id)diskStoreForName:(id)arg1 ;
-(id)persistentKeyValueStoreForConfig:(id)arg1 ;
-(id)diskCacheForConfig:(id)arg1 ;
-(id)_diskStoreForName:(const basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >*)arg1 ;
-(id)_persistenKeyValueStoreForName:(const basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >*)arg1 ;
-(id)initWithStoreManager:(shared_ptr<facebook::mobile::xplat::compactdisk::StoreManager>*)arg1 ;
-(ValueWrapper<FBDiskStore *>)createUnmanagedStoreWithName:(const basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >*)arg1 config:(id)arg2 ;
-(ValueWrapper<FBPersistentKeyValueStore *>)createPKVSWithName:(const basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >*)arg1 config:(id)arg2 ;
-(ValueWrapper<FBDiskCache *>)createDiskCacheWithName:(const basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >*)arg1 config:(id)arg2 ;
-(void)trashStoreOnStartup:(unsigned)arg1 ;
-(void)invalidate;
-(char)isValid;
@end

